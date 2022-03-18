#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define IDEAS 100

class Brain
{
private:
	std::string _ideas[IDEAS];

public:
	Brain();
	~Brain();
	Brain(Brain const &copy);

	Brain &operator=(Brain const &val);
	std::string getIdea(int i) const;
};


#endif
