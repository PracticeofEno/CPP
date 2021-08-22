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

Fixed& Fixed::operator=(Fixed tmp)
{
	this->setRawBits(tmp.getRawBits());
	return *this;
}

Fixed Fixed::operator+(Fixed tmp)
{
	Fixed tmp2;

	tmp2.setRawBits(this->_fixedPointValue + tmp.getRawBits());
	return tmp2;
}
Fixed Fixed::operator-(Fixed tmp)
{
	Fixed tmp2;

	tmp2.setRawBits(this->_fixedPointValue - tmp.getRawBits());
	return tmp2;
}
Fixed Fixed::operator*(Fixed tmp)
{
	Fixed tmp2;

	tmp2.setRawBits((this->_fixedPointValue * tmp.getRawBits()) >> _nBits);
	return tmp2;
}
Fixed Fixed::operator/(Fixed tmp)
{
	Fixed tmp2;

	tmp2.setRawBits((this->_fixedPointValue << _nBits) / tmp.getRawBits());
	return tmp2;
}

Fixed& Fixed::operator++( void )
{
	_fixedPointValue = _fixedPointValue + 1;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed& Fixed::operator--( void )
{
	_fixedPointValue = _fixedPointValue - 1;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

bool Fixed::operator < (const Fixed tmp) const
{
	return _fixedPointValue < tmp.getRawBits();
}

bool Fixed::operator > (const Fixed tmp) const
{
	return _fixedPointValue > tmp.getRawBits();
}

bool Fixed::operator <= (const Fixed tmp) const
{
	return _fixedPointValue <= tmp.getRawBits();
}

bool Fixed::operator >= (const Fixed tmp) const
{
	return _fixedPointValue >= tmp.getRawBits();
}

bool Fixed::operator == (const Fixed tmp) const
{
	return _fixedPointValue == tmp.getRawBits();
}

bool Fixed::operator != (const Fixed tmp) const
{
	return _fixedPointValue != tmp.getRawBits();
}

bool Fixed::isEuqal(const Fixed& tmp) const
{
	if (this->_fixedPointValue == tmp.getRawBits())
		return true;
	return false;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (b);
	return a;
}

int Fixed::getRawBits( void ) const 
{
	return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

Fixed::Fixed()
{
	_fixedPointValue = 0;
}

Fixed::Fixed(const int tmp)
{
	_fixedPointValue = tmp << _nBits;
}

Fixed::Fixed(const float tmp)
{
	_fixedPointValue = roundf(tmp * (1 << _nBits));
}

Fixed::Fixed(const Fixed& tmp)
{
	_fixedPointValue = tmp.getRawBits();
}

Fixed::~Fixed()
{
}


std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}