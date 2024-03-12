# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\simpleTable_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\simpleTable_autogen.dir\\ParseCache.txt"
  "simpleTable_autogen"
  )
endif()
