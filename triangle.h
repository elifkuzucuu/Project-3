#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include "line.h"

class triangle : public shape {
	private:
	line edge1;
	line edge2;
	line edge3;
	double perimeterOfTriangle;
	
	public: 
	triangle(line, line , line );
	double set_perimeter() override;
	double get_Perimeter();
};




#endif
