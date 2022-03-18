#include "Form.hpp"

int main()
{
	try
	{
		std::cout << std::endl;
		Bureaucrat dry("Dry", 50);

		std::cout << std::endl;
		std::cout << "***************************************" << std::endl;
		std::cout << std::endl;

		Form f("Request", 70, 90);
		dry.signForm(f);

		std::cout << std::endl;
		std::cout << "***************************************" << std::endl;
		std::cout << std::endl;

		Form ff("Petition", 11, 70);
		dry.signForm(ff);

		std::cout << std::endl;
		std::cout << "***************************************" << std::endl;
		std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

//	try
//	{
//		std::cout << std::endl;
//		Bureaucrat bill("Bill", 70);
//
//		Form fff("PFD", 11, -1);
//		bill.signForm(fff);
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << "Error: " << e.what() << std::endl;
//	}

	return 0;
}
