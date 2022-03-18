#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();

	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << dog->getType() << ": " << dog->makeSound() << std::endl;
	std::cout << cat->getType() << ": " << cat->makeSound() << std::endl;
	std::cout << "Animal: " << meta->makeSound() << std::endl;

	delete meta;
	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << std::endl;

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *w_cat = new WrongCat();
	const WrongCat *c_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << "WrongAnimal:  " << wrong->makeSound() << std::endl;
	std::cout << w_cat->getType() << ":     " << w_cat->makeSound() << std::endl;
	std::cout << c_cat->getType() << ":     " << c_cat->makeSound() << std::endl;
	std::cout << std::endl;

	delete wrong;
	delete w_cat;
	delete c_cat;

	return 0;
}