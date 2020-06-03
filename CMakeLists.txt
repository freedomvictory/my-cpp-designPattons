cmake_minimum_required(VERSION 3.13)
project(my_cpp_designPattons)

set(CMAKE_CXX_STANDARD 11)

#add_executable(my_cpp_designPattons structural_model/Composite/main.cpp structural_model/Composite/BookComponent.h structural_model/Composite/Book.cpp structural_model/Composite/Book.h structural_model/Composite/BookGroup.cpp structural_model/Composite/BookGroup.h structural_model/Composite/librarain.cpp structural_model/Composite/librarain.h)

add_executable(my_cpp_designPattons behavior_model/stragety/main.cpp behavior_model/stragety/stragety.cpp)