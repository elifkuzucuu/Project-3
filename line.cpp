#include "line.h"
#include <cmath>
#include <iostream>

line :: line (point p3, point p4) 
	: startPoint(p3.get_x(),p3.get_y()), endPoint(p4.get_x(),p4.get_y())
{

	setLength();
}


void line :: setLength()
{
	double distance;
	distance = sqrt(((startPoint.get_x() - endPoint.get_x())*(startPoint.get_x()- endPoint.get_x()))+((startPoint.get_y() - endPoint.get_y())*(startPoint.get_y() - endPoint.get_y())));
	lengthOfLine = distance;
	
}
double line :: getLength()
{
	return lengthOfLine;
}
point line :: get_startPoint()
{
	return startPoint;
}
point line :: get_endPoint()
{
	return endPoint;
}
