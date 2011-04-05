//
//  unexpected_arguments.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 4.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

class UnexpectedArgumentsPolicy {
public:
	static const int IGNORE = 1;
	static const int ERROR = 2;
	static const int THROW_EXCEPTION = 3;
};
