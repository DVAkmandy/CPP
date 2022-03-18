#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed {
private:
	int					_raw;
	static const int	_a = 8;

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
};
std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
