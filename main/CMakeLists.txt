cmake_minimum_required(VERSION 3.0)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} CXX)  # C++ 프로젝트로 변경

set (CMAKE_CXX_STANDARD 11)  # C++ 표준 설정 (예: C++11)

file(GLOB SOURCES *.cpp)  # .cpp 확장자로 된 소스 파일 수집

add_executable(${PROJECT_NAME} ${SOURCES})