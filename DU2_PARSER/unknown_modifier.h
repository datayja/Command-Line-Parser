//
//  unknown_modifier.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 4.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

#include <vector>

class UnknownModifierPolicy {
public:
	static const int THROW_EXCEPTION = 1;
	static const int IGNORE = 2;
	static const int IS_ARGUMENT = 3;
	static const int ERROR = 3;
};

template<typename Policy> class UnknownModifier;

template<>
class UnknownModifier<UnknownModifierPolicy::THROW_EXCEPTION> {
	int 
	static 
	deal(std::vector<char>) {}
};

class UnknownModifier  {
	
};

class UnknownModifier {
	
};

class UnknownModifier {
	
};

