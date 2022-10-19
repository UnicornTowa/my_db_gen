cmake_minimum_required(VERSION 3.23)
project(db_gen)

set(CMAKE_CXX_STANDARD 20)

link_directories(C:/Users/tosha/CLionProjects/lib/libxl-4.0.4.0/lib)

add_library(libxl C:/Users/tosha/CLionProjects/lib/libxl-4.0.4.0/lib/libxl.lib)

set_target_properties(libxl PROPERTIES LINKER_LANGUAGE CXX)

add_executable(db_gen main.cpp header.h male_name_gen.cpp female_name_gen.cpp phone.cpp addr.cpp)

target_link_libraries(db_gen LINK_PUBLIC libxl)

include_directories(C:/Users/tosha/CLionProjects/lib/libxl-4.0.4.0/include_cpp)