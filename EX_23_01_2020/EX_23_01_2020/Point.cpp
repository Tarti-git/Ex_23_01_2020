#include "Point.h"

Point::Point(float nbX, float nbY)
{
	nX = nbX;
	nY = nbY;
}

Point::Point(const Point& p)
{
	this->nX = p.nX;
	this->nY = p.nY;
}

float Point::getX()
{
	return nX;
}

float Point::getY()
{
	return nY;
}

Point::~Point()
{
}

std::ostream& operator<<(std::ostream& out, const Point& pt)
{
	out << "[" << pt.nX << ", " << pt.nY << "]";
	return out;
}
