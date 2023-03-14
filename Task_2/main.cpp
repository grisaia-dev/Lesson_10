#include <iostream>
#include "Figures/Figure.h"
#include "Figures/Triangle.h"
#include "Figures/RightTriangle.h"
#include "Figures/IsoscelesTriangle.h"
#include "Figures/EquilateralTriangle.h"
#include "Figures/Quadrilateral.h"
#include "Figures/Rectangle.h"
#include "Figures/Square.h"
#include "Figures/Parallelogram.h"
#include "Figures/Rhombus.h"

void print_info(Figure* f) {
	if (f->get_var_nums() == 8) {
		std::cout << f->get_name() << ":\n";
		std::cout << "Стороны: " << "a=" << f->get_side_a() << " b=" << f->get_side_b() << " c=" << f->get_side_c() << " d=" << f->get_side_d() << std::endl;
		std::cout << "Углы: " << "A=" << f->get_corner_a() << " B=" << f->get_corner_b() << " C=" << f->get_corner_c() << " D=" << f->get_corner_d() << std::endl;
		std::cout << std::endl;
	} else if (f->get_var_nums() == 6) {
		std::cout << f->get_name() << ":\n";
		std::cout << "Стороны: " << "a=" << f->get_side_a() << " b=" << f->get_side_b() << " c=" << f->get_side_c() << std::endl;
		std::cout << "Углы: " << "A=" << f->get_corner_a() << " B=" << f->get_corner_b() << " C=" << f->get_corner_c() << std::endl;
		std::cout << std::endl;
	}
}

int main(void) {
    setlocale(LC_ALL, "Rus");

	Triangle t;
	print_info(&t);

	RightTriangle rt;
	print_info(&rt);
	
	IsoscelesTriangle it;
	print_info(&it);
	
	EquilateralTriangle et;
	print_info(&et);
	
	Quadrilateral q;
	print_info(&q);
	
	Rectangle r;
	print_info(&r);
	
	Square s;
	print_info(&s);
	
	Parallelogram p;
	print_info(&p);
	
	Rhombus rs;
	print_info(&rs);

	return 0;
}