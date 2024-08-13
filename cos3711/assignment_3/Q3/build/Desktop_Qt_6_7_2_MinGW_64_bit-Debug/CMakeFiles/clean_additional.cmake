# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Q3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Q3_autogen.dir\\ParseCache.txt"
  "Q3_autogen"
  )
endif()
