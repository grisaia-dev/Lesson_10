cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(my_first_cmake_project)

add_library(Figures 
    Figures/Figure.cpp
    Figures/Triangle.cpp
    Figures/IsoscelesTriangle.cpp
    Figures/RightTriangle.cpp
    Figures/Quadrilateral.cpp
    Figures/Square.cpp
    Figures/EquilateralTriangle.cpp
    Figures/Parallelogram.cpp
    Figures/Rectangle.cpp
    Figures/Rhombus.cpp
)

add_executable(my_first_cmake_program main.cpp)

target_link_libraries(my_first_cmake_program )