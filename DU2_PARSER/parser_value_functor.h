// DU2-ARG
// Pavel Lisa NPRG051 2010/2011
//


#include <string>

class ParserValueFunctor {
protected:
	void * stored_target;
public:
	virtual void operator()(void * in_value) = 0;
	ParserValueFunctor(void * in_target) {
		this->stored_target = in_target;
	}
};
