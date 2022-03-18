#include "Fixed.hpp"

Fixed::Fixed() : _raw(0){}

Fixed::Fixed(const Fixed &copy)
{
	Fixed::operator=(copy);
}

void Fixed::setRawBits(const int raw)
{
	this->_raw = raw;
}

int Fixed::getRawBits(void) const
{
	return this->_raw;
}

Fixed::~Fixed(){}

Fixed &Fixed::operator=(const Fixed &equals)
{
	this->_raw = equals.getRawBits();
	return *this;
}

Fixed::Fixed(const int raw)
{
	this->_raw = (raw << Fixed::_a);
}

Fixed::Fixed(const float raw)
{
	this->_raw = roundf(raw * (1 << Fixed::_a));
}

float Fixed::toFloat(void) const
{
	float x = (float) this->_raw / (float) (1 << Fixed::_a);
	return (x);
}

int Fixed::toInt(void) const
{
	return (this->_raw >> Fixed::_a);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator== (Fixed const &oper) const
{
	return this->_raw == oper.getRawBits();
}

bool Fixed::operator!= (Fixed const &oper) const
{
	return !(this->_raw == oper.getRawBits());
}

bool Fixed::operator< (Fixed const &oper) const
{
	return this->_raw < oper.getRawBits();
}

bool Fixed::operator<= (Fixed const &oper) const
{
	return this->_raw <= oper.getRawBits();
}

bool Fixed::operator> (Fixed const &oper) const
{
	return this->_raw > oper.getRawBits();
}

bool Fixed::operator>= (Fixed const &oper) const
{
	return this->_raw >= oper.getRawBits();
}

Fixed Fixed::operator+(const Fixed &oper)
{
	return (this->_raw + oper.getRawBits());
}

Fixed Fixed::operator-(const Fixed &oper)
{
	return (this->_raw - oper.getRawBits());
}

Fixed Fixed::operator*(const Fixed &oper)
{
	long long tmp1 = (long long)this->_raw;
	long long tmp2 = (long long)oper.getRawBits();
	Fixed tmp;
	tmp._raw = ((tmp1 * tmp2) / (1 << Fixed::_a));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &oper)
{
	if(oper._raw != 0)
	{
		long long tmp1 = (long long) this->_raw;
		long long tmp2 = (long long) oper.getRawBits();
		Fixed tmp;
		tmp._raw = (tmp1 * (1 << this->_a) / tmp2);
		return (tmp);
	}
	else
	{
		std::cout << "Division by zero" << std::endl;
		Fixed tmp(-1);
		return (tmp);
	}
}

Fixed Fixed::operator++()
{
	++(this->_raw);
	return (*this);
}

Fixed Fixed::operator--()
{
	--(this->_raw);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = (*this);
	++(this->_raw);
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = (*this);
	--(this->_raw);
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a.getRawBits() > b.getRawBits() ? a : b;
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() > b.getRawBits() ? a : b;
}