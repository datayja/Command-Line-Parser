//
//  known_modifier.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 4.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

struct KnownModifierPolicy {
	static const int KEEP = 1;
	static const int REMOVE = 2;
};

template<typename StringType>
class KnownModifierKeep {
public:
	void
	static deal(char ** & app_argv, int & app_argc, int & to_remove) {
		
	}
};

template<typename StringType>
class KnownModifierRemove {
	void
	static deal(char ** & app_argv, int & app_argc, int & to_remove) {
		
	}
};
