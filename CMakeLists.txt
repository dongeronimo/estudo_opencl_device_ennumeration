cmake_minimum_required (VERSION 3.1)
set(CMAKE_SUPPRESS_REGENERATION true)
project(HelloOpenCl)
# Handle OpenCL
find_package(OpenCL REQUIRED)
include_directories(${OpenCL_INCLUDE_DIRS})
link_directories(${OpenCL_LIBRARY})

file(GLOB my_source_files "*.h" "*.cpp")
add_library(DeviceEnnumeration SHARED ${my_source_files} )     #MyDll 

target_link_libraries (DeviceEnnumeration ${OpenCL_LIBRARY})

set_target_properties(${TargetName} PROPERTIES COMPILE_FLAGS "/clr")

if(CMAKE_CXX_FLAGS_DEBUG MATCHES "/RTC1")
string(REPLACE "/RTC1" " " CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
endif()

if(CMAKE_CXX_FLAGS MATCHES "/EHsc")
string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif()