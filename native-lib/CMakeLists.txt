cmake_minimum_required(VERSION 3.22.1)

project(native-lib CXX)

message("Project: ${CMAKE_PROJECT_NAME}")
message("Compiler: ${CMAKE_CXX_COMPILER}")

set(JDK_HOME "C:\\Program Files\\Java\\jdk-22\\include")
set(WIN32_HOME ${JDK_HOME}\\win32)

include_directories(
        BEFORE
        ${JDK_HOME}
        ${WIN32_HOME})

add_library(${CMAKE_PROJECT_NAME} SHARED
        StudentImpl.cpp)