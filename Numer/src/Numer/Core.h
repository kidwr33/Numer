#pragma once

#ifdef NM_PLATFORM_WINDOWS
	#ifdef NM_BUILD_DLL
		#define NUMER_API __declspec(dllexport)
	#else
		#define NUMER_API __declspec(dllimport)
	#endif

#else
	#error Numer only support windows!
#endif
