#pragma once

#ifdef HX_PLATFORM_WINDOWS
	#ifdef HX_BUILD_DLL
		#define HEXEL_API __declspec(dllexport)
	#else
		#define HEXEL_API __declspec(dllimport)
	#endif
#else
#error Hexel only support Windows!
#endif

#define BIT(x) (1 << x)