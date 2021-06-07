
#ifdef FUNNY_DLL_BUILD
	#define SGAPI _declspec(dllexport)
#else
	#define SGAPI _declspec(dllimport)
#endif // FUNNY_DLL_BUILD
