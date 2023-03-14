#include "Triangle.h"

Triangle::Triangle() : Triangle(10, 20, 30, 50, 60, 70, "Треугольник") {}

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string _name) : Figure(a, b, c, A, B, C, _name) { this->var_nums = 6; }