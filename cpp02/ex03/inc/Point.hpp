#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

public :

	Point();
	Point(float a, float b);
	Point(const Point& tmp);
	~Point();
	Point& operator = (const Point tmp);
	Fixed getX(void) const;
	Fixed getY(void) const;

private :

	Fixed const _x;
	Fixed const _y;
};
bool bsp(Point const a, Point const b, Point const c, Point const p);
#endif