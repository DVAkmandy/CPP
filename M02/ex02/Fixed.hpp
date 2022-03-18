#ifndef FIXED_HPP
#define FIXED_HPP


# include <iostream>
# include <cmath>


class Fixed
{
private:
	int _raw;
	static const int    _a = 8;

public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(int const raw);
	Fixed(float const raw);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed &operator = (Fixed const &equals);
	float	toFloat (void) const;
	int		toInt (void) const;

	bool operator== (Fixed const &oper) const;
	bool operator!= (Fixed const &oper) const;
	bool operator< (Fixed const &oper) const;
	bool operator<= (Fixed const &oper) const;
	bool operator> (Fixed const &oper) const;
	bool operator>= (Fixed const &oper) const;

	Fixed	operator+(Fixed const &oper);
	Fixed	operator-(Fixed const &oper);
	Fixed	operator*(Fixed const &oper);
	Fixed	operator/(Fixed const &oper);

	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

};
std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif