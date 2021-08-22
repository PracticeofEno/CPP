#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::~Point()
{
}

Point::Point(float a, float b) : _x(Fixed(a)), _y(Fixed(b))
{
}

Point::Point(const Point &tmp) : _x(tmp.getX()), _y(tmp.getY())
{
}

Fixed Point::getX(void) const
{
	return _x;
}
Fixed Point::getY(void) const
{
	return _y;
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed sik1, sik2, sik3;

	sik1 = ( ( a.getX() - p.getX() ) * ( c.getY() - p.getY() ) ) - ( (c.getX() - p.getX()) - (a.getY() - p.getY()) );
	sik2 = ( ( c.getX() - p.getX() ) * ( b.getY() - p.getY() ) ) - ( (b.getX() - p.getX()) - (c.getY() - p.getY()) );
	sik3 = ( ( b.getX() - p.getX() ) * ( a.getY() - p.getY() ) ) - ( (a.getX() - p.getX()) - (b.getY() - p.getY()) );

	if (sik1 > 0 && sik2 > 0 && sik3 > 0)
		return true;
	else if (sik1 < 0 && sik2 < 0 && sik3 < 0)
		return true;
	return false;
}