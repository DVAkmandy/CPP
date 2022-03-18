
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	Dog(Dog const &copy);
	~Dog();

	Dog &operator=(Dog const &val);
	std::string makeSound() const;
	Brain &getBrain() const;
	void setBrain(const Brain &brain);
};


#endif
