#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

// ************************************************************************** //
//                               Fixed   Class                                //
// ************************************************************************** //

class Fixed {
	
public :
	Fixed();
	~Fixed();
	Fixed(Fixed& tmp);
	void operator = (Fixed& tmp);

	int getRawBits( void );
	void setRawBits(int const raw);

private :
	int	_fixedPointValue;
	static const int _nBits = 8;
};

#endif