#ifndef LINE_H
#define LINE_H
#include "point.h"
class line
{
	private:
		point startPoint;
		point endPoint;
		double lengthOfLine;
		
	public:
		void setLength();
		line(point, point);
		double getLength();
		point get_startPoint();
		point get_endPoint();
};
#endif
