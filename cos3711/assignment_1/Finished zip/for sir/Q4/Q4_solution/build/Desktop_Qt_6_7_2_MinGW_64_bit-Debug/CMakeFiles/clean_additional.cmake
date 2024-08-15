# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Q4_solution_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Q4_solution_autogen.dir\\ParseCache.txt"
  "Q4_solution_autogen"
  )
endif()
