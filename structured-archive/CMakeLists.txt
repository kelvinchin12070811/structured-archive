# CMakeList.txt : CMake project for structured-archive, include source and define
# project specific logic here.
#

# Add source to this project's executable.
project(structured-archive)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/out/build")

set (SOURCE_FILES
"structured-archive.cpp"
)

set (HEADER_FILES
"structured-archive.hpp"
)

add_executable (${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
