# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\simpleTable2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\simpleTable2_autogen.dir\\ParseCache.txt"
  "simpleTable2_autogen"
  )
endif()
