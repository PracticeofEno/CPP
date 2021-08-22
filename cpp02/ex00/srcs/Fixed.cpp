#include "Fixed.hpp"

void Fixed::operator= (Fixed& tmp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(tmp.getRawBits());
}

int Fixed::getRawBits( void )
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

Fixed::Fixed(Fixed& tmp)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->setRawBits(tmp.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}