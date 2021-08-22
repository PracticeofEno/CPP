#include "Fixed.hpp"

int Fixed::toInt(void) const
{
	int tmp;

	tmp = (int)(_fixedPointValue >> _nBits);
	return tmp;
}

float Fixed::toFloat(void) const
{
	float tmp;

	tmp = ((float)_fixedPointValue / (float)(1 << _nBits));
	return tmp;
}

Fixed& Fixed::operator = (Fixed tmp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(tmp.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits memeber function called" << std::endl;
	return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const int tmp)
{
	std::cout << "Int Constructor called" << std::endl;
	_fixedPointValue = tmp << _nBits;
}

Fixed::Fixed(const float tmp)
{
	std::cout << "Float Constructor called" << std::endl;
	_fixedPointValue = roundf(tmp * (1 << _nBits));
}

Fixed::Fixed(const Fixed& tmp)
{
	std::cout << "Copy Constructor called" << std::endl;
	_fixedPointValue = tmp.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}


std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}