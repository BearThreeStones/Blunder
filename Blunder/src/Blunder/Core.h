#pragma once

#ifdef BLUNDER_PLATFORM_WINDOWS
#ifdef BLUNDER_BUILD_DLL
#define BLUNDER_API __declspec(dllexport)
#else
#define BLUNDER_API __declspec(dllimport)
#endif  //  BLUNDER_BUILD_DLL
#else
#error Blunder only supports Windows!

#endif  //  BLUNDER_PLATFORM_WINDOWS
