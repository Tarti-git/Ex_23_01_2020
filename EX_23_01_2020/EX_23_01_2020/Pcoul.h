#pragma once
#include "Point.h"

typedef enum Color { blue, green, red, yellow };

class Pcoul 
{
private :
	Point p;
	Color col;
public :
	Pcoul(float nbX = 0, float nbY = 0, Color col = Color::blue);
	Pcoul(Point pt, Color col = Color::blue);
	friend std::ostream& operator<<(std::ostream& out, Pcoul& pt);
	~Pcoul();
};