#pragma once

#ifdef HZ_PLATFORM_WINDOWS
#ifdef HZ_BUILD_DLL
#define HAZEL_API _declspec(dllexport)  // Windows上，_declspec用来生成动态库的.lib部分
#else
#define HAZEL_API _declspec(dllimport)
#endif
#else
#error Hazel only support Windows!
#endif

