//
//  default_value_functors.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 4.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

#include <iostream>

template<typename FunctorValueType> class DefaultValueFunctor;

template<typename FunctorValueType>
class DefaultValueFunctor : public ParserValueFunctor {
public:
	void operator()(void * in_value) {
		std::cout << "calling default template!" << std::endl;
	}
	DefaultValueFunctor(void * in_target): ParserValueFunctor(in_target) {}
};

template<>
class DefaultValueFunctor<char*> : public ParserValueFunctor {
public:
	void operator()(void * in_value) {
		std::cout << "calling char template!" << std::endl;
	}
	DefaultValueFunctor(void * in_target): ParserValueFunctor(in_target) {}
};
