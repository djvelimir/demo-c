cmake_minimum_required(VERSION 3.5.0)
project(main VERSION 0.1.0 LANGUAGES C)

add_executable(main
  src/main.c
  src/util.c
)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
