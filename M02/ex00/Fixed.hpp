#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed {
private:
	int					_raw;
	static const int	a = 8;

public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed &operator = (Fixed const &equals);

};


#endif
