#include <iostream>
#include <string>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	

	std::cout << "Address str       " << &brain << std::endl;
	std::cout << "Address stringPTR " << &stringPTR << std::endl;
	std::cout << "Address stringREF " << &stringREF << std::endl << std::endl;
	std::cout << "string    = " << brain << std::endl;
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;

	return 0;
}