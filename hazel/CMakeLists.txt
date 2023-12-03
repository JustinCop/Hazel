cmake_minimum_required(VERSION 3.15)

#-------------------------------------------
# hazel engine shared libraries
set(HAZEL_LIB_SOURCES
    src/core/Application.cpp
    src/core/Log.cpp
    )

add_library(hazel SHARED ${HAZEL_LIB_SOURCES})

# flags for hazel lib builds
target_compile_definitions(hazel PRIVATE
    HZ_BUILD_DLL
)

# flags for other levels using hazel lib
target_compile_definitions(hazel PUBLIC
    HZ_PLATFORM_WINDOWS
)

target_include_directories(hazel PUBLIC
    3rdparty/spdlog/include
)

