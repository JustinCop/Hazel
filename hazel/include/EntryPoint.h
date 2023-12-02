#pragma once
// When the application (for example Sandbox) is launched, it will first go here
// to find a proper entrypoint based on platform.

#include "Application.h"
#include "Log.h"

#ifdef HZ_PLATFORM_WINDOWS

int main(int argc, char **argv)
{
    Hazel::Log::Init();

    HZ_CORE_WARN("Initialize Log!");
    int a = 5l;
    HZ_INFO("Hello Vars={0}", a);

    Hazel::Application* app = Hazel::CreateApplication();
    app->Run();
    delete app;
}

#endif // HZ_PLATFORM_WINDOWS
