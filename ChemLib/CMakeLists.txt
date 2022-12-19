cmake_minimum_required(VERSION 3.23)

project(ChemLib)

#Do version stuff;
set (CHEMLIB_VERSION_MAJOR 1)
set (CHEMLIB_VERSION_MINOR 0)
set(CMAKE_BUILD_TYPE RELEASE)

set (inc_dir ${CMAKE_CURRENT_SOURCE_DIR}/inc)
add_subdirectory(${inc_dir})

configure_file(
	"${inc_dir}/Version.hpp.in"
	"${inc_dir}/Version.hpp"
)

#Add library to targets;
set (src_dir ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_subdirectory(${src_dir})

add_library(ChemLib SHARED ${CHEMLIB_HEADERS} ${CHEMLIB_SOURCES})
include_directories(${CHEMLIB_INC_PATH})
install(FILES $<TARGET_FILE:ChemLib> DESTINATION bin)

set(CHEMLIB_INC_PATH ${CHEMLIB_INC_PATH} PARENT_SCOPE)
