#cmake_minimum_required(VERSION 3.5)

#project(ChemCalc VERSION 0.1 LANGUAGES CXX)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

######################################

include_directories(CHEMLIB_INC_PATH)


######################################

#find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
#find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

#set(PROJECT_SOURCES
#        main.cpp
#        mainwindow.cpp
#        mainwindow.h
#        mainwindow.ui
#)

#if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
#    qt_add_executable(ChemCalc
#        MANUAL_FINALIZATION
#        ${PROJECT_SOURCES}
#    )
## Define target properties for Android with Qt 6 as:
##    set_property(TARGET ChemCalc APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
##                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
## For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
#else()
#    if(ANDROID)
#        add_library(ChemCalc SHARED
#            ${PROJECT_SOURCES}
#        )
## Define properties for Android with Qt 5 after find_package() calls as:
##    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    else()
#        add_executable(ChemCalc
#            ${PROJECT_SOURCES}
#        )
#    endif()
#endif()

#target_link_libraries(ChemCalc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

##set(CMAKE_CXX_FLAGS "-L /absolute/path/to/libchem.a")
##set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -LC/Users/dsash/Repository/ChemicalCalculator/lib")
##target_link_libraries(ChemCalc PUBLIC LIBCHEM)

#set_target_properties(ChemCalc PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
#    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#    MACOSX_BUNDLE TRUE
#    WIN32_EXECUTABLE TRUE
#)

##add_subdirectory(ChemLib)
##target_link_libraries(ChemCalc PUBLIC ChemLib)

#install(TARGETS ChemCalc
#    BUNDLE DESTINATION .
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

#if(QT_VERSION_MAJOR EQUAL 6)
#    qt_finalize_executable(ChemCalc)
#endif()

cmake_minimum_required(VERSION 3.5)

project(ChemCalc VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#####################################

#include_directories("C:/Users/dsash/Repository/ChemicalCalculator")
#add_subdirectory(CHEMLIB)

#####################################

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        PressureSolver.cpp
        SolverC.cpp
        TemperatureSolver.cpp
        VolumeSolver.cpp
        ChemLib.hpp
        PressureSolver.hpp
        SolverC.hpp
        TemperatureSolver.hpp
        VolumeSolver.hpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ChemCalc
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET ChemCalc APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(ChemCalc SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(ChemCalc
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(ChemCalc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#set(CMAKE_CXX_FLAGS "-L /absolute/path/to/libchem.a")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -LC/Users/dsash/Repository/ChemicalCalculator/lib")
#target_link_libraries(ChemCalc PUBLIC LIBCHEM)

set_target_properties(ChemCalc PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

#add_subdirectory(ChemLib)
#find_library( CHEM_LIB ChemLib "C:/Users/dsash/Repository/ChemicalCalculator/ChemLib/cmake-build-debug")
#message(STATUS "lib found: ${CHEM_LIB}")
#target_link_libraries(ChemCalc PUBLIC ${CHEM_LIB})

install(TARGETS ChemCalc
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ChemCalc)
endif()
