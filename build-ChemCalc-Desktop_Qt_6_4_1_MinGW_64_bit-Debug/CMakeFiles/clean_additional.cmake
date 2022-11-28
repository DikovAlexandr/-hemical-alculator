# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ChemCalc_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ChemCalc_autogen.dir\\ParseCache.txt"
  "ChemCalc_autogen"
  )
endif()
