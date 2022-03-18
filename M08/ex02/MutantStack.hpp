#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack() : std::stack<T>() {}
	virtual ~MutantStack() {}
	MutantStack( const MutantStack<T> & src ) : std::stack<T>(src) {}
	MutantStack<T> & operator= ( const MutantStack<T> & src );

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
	reverse_iterator rend() { return (std::stack<T>::c.rend()); }
};


#endif
