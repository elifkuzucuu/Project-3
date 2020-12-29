#include "triangle.h"
#include "line.h"

triangle :: triangle(line ln1, line ln2, line ln3)
		:edge1(ln1.get_startPoint(),ln1.get_endPoint()), edge2(ln2.get_startPoint(),ln2.get_endPoint()), edge3(ln3.get_startPoint(),ln3.get_endPoint())
		
{
	
	set_perimeter();
}

double triangle :: set_perimeter() 
{
	perimeterOfTriangle = edge1.getLength()+edge2.getLength()+edge3.getLength();
	
}
double triangle :: get_Perimeter()
{
	return perimeterOfTriangle;
}
