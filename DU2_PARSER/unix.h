//
//  unix.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 3.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

#include <cassert>

template <typename StringType>
class UNIXConvention {
private:
	UNIXConvention() {}
	~UNIXConvention() {}
public:
	StringType 
	static
	makeModifier(const StringType & modifier_name) {
		assert(modifier_name.size());
		
		// UNIX policy
		if (modifier_name.size() == 1) {
			return "-" + modifier_name;
		} else {
			return "--" + modifier_name;
		}
	}
	
	bool
	static
	mayBeModifier(const StringType & modifier) {
		// UNIX convention: -a=smthng or --aloha=smthng
		// very dumb implementation, may be better
		if (modifier.find_first_of('=', 2) != StringType::npos) {
			return true;
		} else {
			return false;
		}
	}
	
	StringType
	static
	extractModifierName(const StringType & modifier) {
		size_t modifier_name_begin = modifier.find_first_not_of('-', 0);
		size_t modifier_name_end = modifier.find_first_of('=', 2) - 1;
		return StringType(modifier.substr(modifier_name_begin, modifier_name_end));
	}
	
	StringType
	static
	extractModifierParam(const StringType & modifier) {
		size_t modifier_name_begin = modifier.find_first_of('=', 0) + 1;
		return StringType(modifier.substr(modifier_name_begin, modifier.size() - 1));
	}
};
