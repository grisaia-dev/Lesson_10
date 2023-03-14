#pragma once

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle();
protected:
	IsoscelesTriangle(int ac, int b, int AC, int B, std::string _name);
};
