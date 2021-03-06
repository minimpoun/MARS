#pragma once

#include <cassert>
// @TEMPHACK: Will eventually have a custom Assert macro lib

#ifdef DEBUG
#define assertCheck assert
#else
#define assertCheck (void)
#endif

/*
 *	repeat of the PLATFORM_WINDOWS macro in EngineCore to avoid circle include
 **/
#if defined(WIN32) || defined(__WIN32) || defined(__WIN32__) || defined(WIN64) || defined(__WIN64)
#define Assert(x, y)\
{\
	if (!(x))\
	{\
		Log::Write(LI_Fatal, LogError, y);\
		__debugbreak();\
	}\
};

#else
	// only supports windows atm
#endif