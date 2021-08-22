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
	Fixed& operator = (const Fixed tmp);
	Fixed  operator + (const Fixed tmp);
	Fixed  operator - (const Fixed tmp);
	Fixed  operator * (const Fixed tmp);
	Fixed  operator / (const Fixed tmp);
	friend std::ostream& operator << (std::ostream& os, const Fixed& fixed);
	Fixed& operator++( void );
	Fixed operator++(int);
	Fixed& operator--( void );
	Fixed operator--(int);

	bool isEuqal(const Fixed& tmp) const;

	bool operator < (const Fixed tmp) const;
	bool operator > (const Fixed tmp) const;
	bool operator <= (const Fixed tmp) const;
	bool operator >= (const Fixed tmp) const;
	bool operator == (const Fixed tmp) const;
	bool operator != (const Fixed tmp) const;

	static const Fixed& max(const Fixed& a, const Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	int getRawBits( void ) const ;
	void setRawBits(int const raw);
	int	toInt( void ) const;
	float toFloat( void ) const;


private :
	int	_fixedPointValue;
	static const int _nBits = 8;
};

#endif