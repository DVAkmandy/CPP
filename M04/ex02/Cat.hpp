
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat();
	Cat(Cat const &copy);
	virtual ~Cat();

	Cat &operator=(Cat const &val);
	std::string makeSound() const;
	Brain &getBrain() const;
};


#endif
