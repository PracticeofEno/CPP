#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(0, 3);
	Point b;
	Point c(5.4, 0);
	Point d(1, 1);
	Point e(1, 0);
	Point f(100,100);

	std::cout << a.getX() << " | " << a.getY() << std::endl;
	std::cout << b.getX() << " | " << b.getY() << std::endl;
	std::cout << c.getX() << " | " << c.getY() << std::endl;

	std::cout << "point d is : " << bsp(a, b, c, d) << std::endl;
	std::cout << "point e is : " << bsp(a, b, c, e) << std::endl;
	std::cout << "point e is : " << bsp(a, b, c, f) << std::endl;
	return (0);
}