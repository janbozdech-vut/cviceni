# CMakeList.txt : CMake project for Prunik intervalu, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CMakeTarget "Prunik intervalu.cpp" "Prunik intervalu.h" "modul.cpp" "modul.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
