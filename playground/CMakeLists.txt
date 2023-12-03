cmake_minimum_required(VERSION 3.15)

#-----------------------------------------
# playground exe
set(PLAYGROUND_EXE_SOURCES
    src/playground.cpp
)

add_executable(playground ${PLAYGROUND_EXE_SOURCES})

target_include_directories(playground PUBLIC
    ${PROJECT_SOURCE_DIR}/hazel/src/
)

target_link_libraries(playground PRIVATE
    hazel
)
