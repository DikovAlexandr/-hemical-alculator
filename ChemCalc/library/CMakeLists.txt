cmake_minimum_required(VERSION 3.23)
#############################
# Information about project #
#############################
project(chem
        VERSION 0.1
        DESCRIPTION "Chemical calculator library"
        LANGUAGES CXX)

set (lib_VERSION_MAJOR 0)
set (lib_VERSION_MINOR 2)
set (lib_VERSION "$lib_VERSION_MAJOR}.${lib_VERSION_MINOR}")

##################################################
# Set current cpp version and optimization level #
##################################################
set (CMAKE_CXX_STANDARD 17)

# Header library
add_library(lib_headers INTERFACE)
target_include_directories(lib_headers INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        )
target_compile_features(lib_headers INTERFACE cxx_std_17)

add_library(lib::headers ALIAS lib_headers)

####################
# Compiled library #
####################
# Make a list by regular expression
file(GLOB CPP_SOURCE "src/*.cpp")

# Crate executable file
#add_executable(lib ${CPP_SOURCES})

add_library(chem ${CPP_SOURCE})
target_link_libraries(chem PUBLIC lib_headers)

add_library(lib::library ALIAS chem)

################
# Installation #
################
install(DIRECTORY include/lib DESTINATION include)

install(TARGETS lib_headers chem EXPORT libConfig)
install(EXPORT libConfig NAMESPACE lib:: DESTINATION share/lib/cmake)

include(CMakePackageConfigHelpers)
write_basic_package_version_file("${PROJECT_BINARY_DIR}/libConfigVersion.cmake"
        VERSION
        ${PROJECT_VERSION}
        COMPATIBILITY
        AnyNewerVersion
        )
install(FILES "${PROJECT_BINARY_DIR}/libConfigVersion.cmake" DESTINATION share/lib/cmake)
