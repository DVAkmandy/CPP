#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string		_type;

public:
	Animal();
	Animal(std::string const &type);
	Animal(Animal const &copy);
	virtual ~Animal();

	Animal &operator=(Animal const &val);
	virtual std::string makeSound() const = 0;
	void setType(std::string type);
	std::string getType() const;
};


#endif
