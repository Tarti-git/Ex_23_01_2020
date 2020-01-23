#pragma once
#include <iostream>
#include <map>
#include <string>

class Point
{
private:
	//Données membres de la classe
	float nX;
	float nY;
public:
	Point(float nbX = 0, float nbY = 0);
	Point(const Point& p);
	float getX();
	float getY();
	friend std::ostream& operator<<(std::ostream& out, const Point& pt);
	~Point();
};