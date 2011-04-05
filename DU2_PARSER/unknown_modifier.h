//
//  unknown_modifier.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 4.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

#include <vector>

struct UnknownModifierPolicy {
	static const int THROW_EXCEPTION = 1;
	static const int IGNORE = 2;
	static const int IS_ARGUMENT = 3;
	static const int ERROR = 4;
};

template<typename StringType>
class UnknownModifierException {
	int 
	static 
	deal(std::vector<StringType> app_args) {
		return UnknownModifierPolicy::THROW_EXCEPTION;
	}
};

template<typename StringType>
class UnknownModifierIgnore  {
	int 
	static 
	deal(std::vector<StringType> app_args) {
		return UnknownModifierPolicy::IGNORE;
	}
};

template<typename StringType>
class UnknownModifierIsArgument {
	int 
	static 
	deal(std::vector<StringType> app_args) {
		return UnknownModifierPolicy::IS_ARGUMENT;
	}
};

template<typename StringType>
class UnknownModifierError {
	int 
	static 
	deal(std::vector<StringType> app_args) {
		return UnknownModifierPolicy::ERROR;
	}
};

