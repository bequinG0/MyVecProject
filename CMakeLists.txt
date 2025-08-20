cmake_minimum_required(VERSION 3.10)  
project(MyVec VERSION 1.0)  
  
set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)  

add_library(MyVec SHARED src/MyVec.cpp)  

target_include_directories(MyVec PUBLIC include)  

install(TARGETS MyVec DESTINATION lib)  
install(FILES include/MyVec.h DESTINATION include)  
