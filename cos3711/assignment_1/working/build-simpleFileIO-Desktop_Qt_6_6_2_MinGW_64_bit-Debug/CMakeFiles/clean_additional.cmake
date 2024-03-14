# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\simpleFileIO_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\simpleFileIO_autogen.dir\\ParseCache.txt"
  "simpleFileIO_autogen"
  )
endif()
