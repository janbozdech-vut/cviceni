# CMakeList.txt : CMake project for Prestupny-rok, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Prestupny-rok "Prestupny-rok.cpp" "Prestupny-rok.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Prestupny-rok PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
