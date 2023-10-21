#pragma once

#include "core.h"

namespace Hazel
{
    // 这个_declspec声明要放在class关键字后面。
    class HAZEL_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    static Application *CreateApplication();   // To be defined in client.
}