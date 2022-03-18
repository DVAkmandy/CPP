
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &copy);
	virtual ~Cat();

	Cat &operator=(Cat const &val);
	std::string makeSound() const;
};


#endif
