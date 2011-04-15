// DU2-ARG
// Pavel Lisa NPRG051 2010/2011
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
	std::cout << cau;
	
    return 0;
}

/*
 I ran out of time while working on this, so there are few features missing, but could be 
 easily implemented in a few hours, provided I had any. 
 
 Missing features: not all detailed policies actually utilized, those about bad modifiers 
 and similar. Manipulating argv and argc also not implemented, but I planned doing it with
 the vector of arguments - there would be a second one for modifiers, and under specific 
 conditions, they would be deleted from the vector, and the vector would be then converted
 to C-array and argc updated. 
 
 But, at least it is working with char and wchar_t (I hope so). 
 
 UNIX convention was a bit unclear, so I implemented two ways of getting typed arguments of
 modifiers: --modifier=value and --modifier value
 
 Tested only with llvmcompiler 2.0/Xcode 4.0
 */
