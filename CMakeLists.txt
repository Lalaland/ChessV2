cmake_minimum_required(VERSION 2.6)

project(ChessV2)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "-g -std=c++0x")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")	

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/arch)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
   

set(Boost_ADDITIONAL_VERSIONS "1.42" "1.42.0" "1.41.0" "1.41" "1.40.0" "1.40" "1.39.0" "1.39" "1.38.0" "1.38" "1.37.0" "1.37" )
set(BOOST_COMPONENTS system thread date_time filesystem)

find_package(Boost COMPONENTS ${BOOST_COMPONENTS} REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

set(ClanLib_MAJOR_VERSION 2)
set(ClanLib_MINOR_VERSION 2)

find_package(ClanLib REQUIRED)
include_directories(${ClanLib_INCLUDE_DIRS})

add_subdirectory(client) 

#Not even started yet, lol
#add_subdirectory(server) 

