set(BINARY ${Lab-05})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES})

add_executable(${BINARY}Lab-05 ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})