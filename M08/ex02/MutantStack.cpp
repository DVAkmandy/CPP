#include "MutantStack.hpp"

template <typename T>
MutantStack<T> & MutantStack<T>::operator= ( const MutantStack<T> & other ) {
	if (*this != other) {
		this->c = other.c;
	}
	return *this;
}
