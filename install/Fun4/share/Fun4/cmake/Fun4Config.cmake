# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Fun4_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Fun4_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Fun4_FOUND FALSE)
  elseif(NOT Fun4_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Fun4_FOUND FALSE)
  endif()
  return()
endif()
set(_Fun4_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Fun4_FIND_QUIETLY)
  message(STATUS "Found Fun4: 0.0.0 (${Fun4_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Fun4' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Fun4_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Fun4_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Fun4_DIR}/${_extra}")
endforeach()
