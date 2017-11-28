cmake_minimum_required(VERSION 3.0)
project (ocv)

find_package(OpenCV)

if(OpenCV_FOUND)
  message("opencv found")
else()
  message("opencv not found")
endif()

set (camera_SOURCES
  src/camera.cc)

include_directories( ${OpenCV_INCLUDE_DIRS})
add_executable(camera ${camera_SOURCES})

target_link_libraries( camera
  PRIVATE ${OpenCV_LIBS}
  )
