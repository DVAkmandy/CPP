#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string		_type;

public:
	WrongAnimal();
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &copy);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(WrongAnimal const &val);
	std::string makeSound() const;
	void setType(std::string type);
	std::string getType() const;
};


#endif
