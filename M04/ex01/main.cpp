#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL 2

int main()
{
//	const Animal* dog = new Dog();
//	const Animal* cat = new Cat();
//
//	std::cout << std::endl;
//	std::cout << dog->getType() << ": " << dog->makeSound() << std::endl;
//	std::cout << cat->getType() << ": " << cat->makeSound() << std::endl;
//	std::cout << std::endl;
//
//	delete dog;//should not create a leak
//	delete cat;
//	std::cout << std::endl;

	const Animal *tmp[ANIMAL];
	const Animal *copy_animal[ANIMAL];

	for (int i = 0; i < ANIMAL; i++)
	{
		if(i % 2)
		{
			tmp[i] = new Dog();
			copy_animal[i] = new Dog(*(Dog*)tmp[i]);
		}
		else
		{
			tmp[i] = new Cat();
			copy_animal[i] = new Cat(*(Cat*)tmp[i]);
		}
	}
	std::cout  << std::endl;

	for (int i = 0; i < ANIMAL; i++)
	{
		if(i % 2)
		{
			std::cout << tmp[i]->getType() << ": " << tmp[i]->makeSound() << " " << tmp[i] << " " << ((Dog*)tmp[i])->getBrain().getIdea(i)
					  << " | Copy_" << copy_animal[i]->getType() << ": " << copy_animal[i]->makeSound() << " " << copy_animal[i] << " " << ((Dog*)copy_animal[i]) -> getBrain().getIdea(i) << std::endl;
		}
		else
			std::cout << tmp[i]->getType() << ": " << tmp[i]->makeSound() << " " << tmp[i] << " " << ((Cat*)tmp[i])->getBrain().getIdea(i)
					  << " | Copy_" << copy_animal[i]->getType() << ": " << copy_animal[i]->makeSound() << " " << copy_animal[i] << " " << ((Cat*)copy_animal[i]) -> getBrain().getIdea(i) << std::endl;
	}
	std::cout  << std::endl;

	for (int i = 0; i < ANIMAL; i++)
	{
		delete copy_animal[i];
		delete tmp[i];
	}
	return 0;
}
