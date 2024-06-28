# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\newnew_x230_gui_working_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\newnew_x230_gui_working_autogen.dir\\ParseCache.txt"
  "newnew_x230_gui_working_autogen"
  )
endif()
