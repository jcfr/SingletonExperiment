cmake_minimum_required(VERSION 3.1)

project(SingletonExperiment)

set(CMAKE_INCLUDE_CURRENT_DIR 1)
set(CMAKE_POSITION_INDEPENDENT_CODE 1)

#-----------------------------------------------------------------------------
# Set a default build type if none was specified
#-----------------------------------------------------------------------------
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to 'Debug' as none was specified.")
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  mark_as_advanced(CMAKE_BUILD_TYPE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()

include(GenerateExportHeader)

add_library(SingletonComponent STATIC SingletonComponent.h SingletonComponent.cpp)

add_library(Component1 SHARED Component1.h Component1.cpp)
generate_export_header(Component1)
target_link_libraries(Component1 SingletonComponent)

add_library(Component2 SHARED Component2.h Component2.cpp)
generate_export_header(Component2)
target_link_libraries(Component2 SingletonComponent)

add_executable(main main.cpp)
target_link_libraries(main Component1 Component2)
