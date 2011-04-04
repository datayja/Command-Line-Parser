//
//  value_policy.h
//  DU2_PARSER
//
//  Created by Pavel Lisa on 3.4.11.
//  Copyright 2011 MFF UK. All rights reserved.
//

class ParserValueFunctor {
private:
	void * stored_target;
public:
	virtual void operator()(void * in_value) = 0;
	ParserValueFunctor(void * in_target) {
		this->stored_target = in_target;
	}
};
