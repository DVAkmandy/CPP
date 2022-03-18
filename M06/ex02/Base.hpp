#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

class Base {
public:
	virtual ~Base() {};
};

class A: public Base
{
public:
	~A() { std::cout << "Delete A" << std::endl; };
};

class B: public Base
{
public:
	~B() { std::cout << "Delete B" << std::endl; };
};

class C: public Base
{
public:
	~C() { std::cout << "Delete C" << std::endl; };
};

	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);

#endif
