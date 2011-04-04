//
//  du2_parser.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 2.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

#include <string>
#include <map>
#include "parser_value_functor.h"
#include "default_value_functors.h"
#include "unix.h"

template <template <typename> class ConventionPolicy, typename ParserCharType>
class Parser {
private: 
	typedef std::basic_string<ParserCharType> string;
	typedef std::map<string, ParserValueFunctor *> functor_map;
	
	functor_map value_functors;
public:
	
	
	Parser() {
		
	}
	
	void addModifier(const string & modifier, const unsigned int & mode) {
		
	}
	
	template <typename ResultType>
	void addModifier(const string & modifier, const unsigned int & mode, void * target_memory) {
		
	}
	
	void run() {
		
	}
	
	~Parser() {}
};