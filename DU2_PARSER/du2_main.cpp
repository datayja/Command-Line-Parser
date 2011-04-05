//
//  main.cpp
//  DU2_PARSER
//
//  Created by Pavel Lisa on 2.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//


#include <iostream>
#include "du2_parser.h"

int main (int argc, const char * argv[])
{

	// insert code here...
	std::cout << "Hello, World!\n";
	
	Parser<UNIXConvention, char, UnknownModifierIgnore, KnownModifierKeep> parser;
	
    return 0;
}

