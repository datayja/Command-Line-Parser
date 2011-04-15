// DU2-ARG
// Pavel Lisa NPRG051 2010/2011
//


#include <iostream>
#include <sstream>

template<typename FunctorValueType> class DefaultValueFunctor;

template<typename FunctorValueType>
class DefaultValueFunctor : public ParserValueFunctor {
public:
	void operator()(void * in_value) {
		// std::cout << "calling default template!" << std::endl;
		// and do similar with the target - cast void* to FunctorValueType* and dereference
		*(FunctorValueType*)(this->stored_target) = *((FunctorValueType*)in_value);
	}
	DefaultValueFunctor(void * in_target): ParserValueFunctor(in_target) {}
};

// bool*,bool* - not very nice solution, but I'm running out of time to polish it
template<>
class DefaultValueFunctor<bool*> : public ParserValueFunctor {
public:
	void operator()(void * in_value) {
		// cast void* to bool* and dereference
		*((bool*)(this->stored_target)) = true;
	}
	DefaultValueFunctor(void * in_target): ParserValueFunctor(in_target) {}
};



/* // customizations go like this: 

template<>
class CustomValueFunctor<my*> : public ParserValueFunctor {
public:
	void operator()(void * in_value) {
		std::cout << "calling custom template!" << std::endl;
	}
	DefaultValueFunctor(void * in_target): ParserValueFunctor(in_target) {}
};
*/
