#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(copy);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &equals) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = equals.getRawBits();
	return *this;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = (raw << Fixed::_a);
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(raw * (1 << Fixed::_a));
}

float Fixed::toFloat(void) const {
	float x = (float) this->_raw / (float) (1 << Fixed::_a);
	return (x);
}

int Fixed::toInt(void) const {
	return (this->_raw >> Fixed::_a);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}