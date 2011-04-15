// DU2-ARG
// Pavel Lisa NPRG051 2010/2011
//


#include <vector>

struct UnknownModifierPolicy {
	static const int THROW_EXCEPTION = 1;
	static const int IGNORE = 2;
	static const int IS_ARGUMENT = 3;
	static const int ERROR = 4;
};

template<typename StringType>
class UnknownModifierException {
public:
	int 
	static 
	deal(const std::vector<StringType> & app_args, const StringType & unknown) {
		return UnknownModifierPolicy::THROW_EXCEPTION;
	}
};

template<typename StringType>
class UnknownModifierIgnore  {
public:
	int 
	static 
	deal(const std::vector<StringType> & app_args, const StringType & unknown) {
		return UnknownModifierPolicy::IGNORE;
	}
};

template<typename StringType>
class UnknownModifierIsArgument {
public:
	int 
	static 
	deal(const std::vector<StringType> app_args, const StringType & unknown) {
		app_args.push_back(unknown);
		return UnknownModifierPolicy::IS_ARGUMENT;
	}
};

template<typename StringType>
class UnknownModifierError {
public:
	int 
	static 
	deal(std::vector<StringType> app_args, const StringType & unknown) {
		return UnknownModifierPolicy::ERROR;
	}
};

