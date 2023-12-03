#pragma once

#include "core.h"

namespace Hazel
{
    // 这个_declspec声明要放在class关键字后面。
    class HAZEL_API Application
    {
    public:
        virtual ~Application();

        void Run();
    protected:
        Application();
    };

    static Application *CreateApplication();   // To be defined in client.
}