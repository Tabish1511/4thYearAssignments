# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\test_x1_newQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\test_x1_newQT_autogen.dir\\ParseCache.txt"
  "test_x1_newQT_autogen"
  )
endif()
