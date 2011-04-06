//
//  main.cpp
//  DU2_PARSER
//
//  Created by Pavel Lisa on 2.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//


#include <iostream>
#include "du2_parser.h"

int main (int argc, char ** argv)
{

	// insert code here...
	std::cout << "Hello, World!\n";
	
	Parser<UNIXConvention, char, UnknownModifierIgnore, KnownModifierKeep> parser;
	
	bool ahoj = false;
	bool a = false;
	std::string cau;
	
	parser.addPresenceModifier("ahoj", &ahoj);
	parser.addPresenceModifier("a", &a);
	parser.addModifier<std::string>("cau", &cau);
	// parser.addModifier(""); // will fail assertion
	parser.run(argv, argc);
	
    return 0;
}

