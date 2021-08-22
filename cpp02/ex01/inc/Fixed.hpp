#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

// ************************************************************************** //
//                               Fixed   Class                                //
// ************************************************************************** //

class Fixed {
	
public :
	Fixed(const int tmp);
	Fixed(const float tmp);
	Fixed();
	~Fixed();
	Fixed(const Fixed& tmp);
	Fixed& operator = (Fixed tmp);
	friend std::ostream& operator << (std::ostream& os, const Fixed& fixed);

	int getRawBits( void ) const ;
	void setRawBits(int const raw);
	int	toInt( void ) const;
	float toFloat( void ) const;


private :
	int	_fixedPointValue;
	static const int _nBits = 8;
};

#endif