#include "RightTriangle.h"

RightTriangle::RightTriangle() : RightTriangle(10, 20, 30, 50, 60, "Прямоугольный треугольник") {}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, std::string _name) : Triangle(a, b, c, A, B, 90, _name) {}