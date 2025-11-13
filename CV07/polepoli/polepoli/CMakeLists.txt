# CMakeList.txt : CMake project for polepoli, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (polepoli "polepoli.cpp" "polepoli.h" "Body2d.h" "Body2d.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET polepoli PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
