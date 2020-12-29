#include "point.h"

point :: point(double x,double y)
{
	x_coordinate = x;
	y_coordinate = y;
	
}

double point :: get_x()
{
	return x_coordinate;
}
double point :: get_y()
{
	return y_coordinate;
}
