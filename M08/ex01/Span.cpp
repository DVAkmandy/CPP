#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span( unsigned int size ) : _size(size) {};

Span::~Span() {}

Span::Span( const Span & copy ) : _size(copy._size) { (*this) = copy; }

Span & Span::operator= ( const Span & other )
{
	if (this != &other)
	{
		this->_size = other._size;
		this->storage = other.storage;
	}
	return (*this);
}

void Span::addNumber( int number )
{
	if (this->storage.size() >= this->_size)
		throw RangeException();
	this->storage.push_back(number);
}

void Span::addNumber( const std::vector<int> & src, int size ) {
	for (int i = 0; i < size && i < (int)src.size(); i++)
		Span::addNumber(src[i]);
}

int Span::longestSpan( void ) {
	if (this->storage.size() < 2)
		throw RangeException();
	std::vector<int> tmp(this->storage);
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

int Span::shortestSpan( void ) {
	if (this->storage.size() < 2)
		throw RangeException();
	std::vector<int> tmp(this->storage);
	std::sort(tmp.begin(), tmp.end());
	int i, j = -1;
	for (i = 0; i < (int)(tmp.size() - 1); i++)
		if (j == -1 || tmp[i + 1] - tmp[i] < j)
			j = tmp[i + 1] - tmp[i];
	return (j);
}
