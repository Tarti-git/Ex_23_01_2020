#include "Pcoul.h"

Pcoul::Pcoul(float nbX, float nbY, Color col):p(nbX, nbY)
{
	this->col = col;
}

Pcoul::Pcoul(Point pt, Color col):p(pt)
{
	this->col = col;
}

Pcoul::~Pcoul()
{
}

std::ostream& operator<<(std::ostream& out, Pcoul& pt)
{
	out << "[" << pt.p.getX() << ", " << pt.p.getY() << ", ";
	switch (pt.col) {
	case Color::blue: out << "blue"; break;
	case Color::green: out << "green"; break;
	case Color::red: out << "red"; break;
	case Color::yellow: out << "yellow"; break;
	}
	out << "]";
	return out;
}
