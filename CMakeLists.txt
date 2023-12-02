cmake_minimum_required(VERSION 3.15)

project(Hazel)

#-------------------------------------------
# hazel engine shared libraries
set(HAZEL_LIB_SOURCES
    hazel/src/Application.cpp
    hazel/src/Log.cpp
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
    hazel/include
    vendor/spdlog/include
)

#-----------------------------------------
# playground exe
set(PLAYGROUND_EXE_SOURCES
    playground/src/playground.cpp
)

add_executable(playground ${PLAYGROUND_EXE_SOURCES})

target_include_directories(playground PUBLIC
    playground/include
)

target_link_libraries(playground PRIVATE
    hazel
)
