#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
public:
	Square();
protected:
	Square(int abcd, std::string _name);
};