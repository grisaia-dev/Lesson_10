#pragma once

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle();
protected:
	EquilateralTriangle(int abc, std::string _name);
};