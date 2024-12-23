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

#ifdef HX_ENABLE_ASSERTS
#define HX_ASSERT(x, ...) { if(!(x)) { HX_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define HX_CORE_ASSERT(x, ...) { if(!(x)) { HX_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define HX_ASSERT(x, ...)
#define HX_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)