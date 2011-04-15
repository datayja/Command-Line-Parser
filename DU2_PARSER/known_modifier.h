// DU2-ARG
// Pavel Lisa NPRG051 2010/2011
//


struct KnownModifierPolicy {
	static const int KEEP = 1;
	static const int REMOVE = 2;
};

template<typename StringType>
class KnownModifierKeep {
public:
	void
	static deal(char ** & app_argv, int & app_argc, int & to_remove) {
		
	}
};

template<typename StringType>
class KnownModifierRemove {
	void
	static deal(char ** & app_argv, int & app_argc, int & to_remove) {
		
	}
};
