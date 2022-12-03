#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lib::lib_library" for configuration "Debug"
set_property(TARGET lib::lib_library APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lib::lib_library PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/liblib_library.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS lib::lib_library )
list(APPEND _IMPORT_CHECK_FILES_FOR_lib::lib_library "${_IMPORT_PREFIX}/lib/liblib_library.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
