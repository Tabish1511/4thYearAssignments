# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\q3_working_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\q3_working_autogen.dir\\ParseCache.txt"
  "q3_working_autogen"
  )
endif()
