#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat dry("dry", 1);

		PresidentialPardonForm ppf("Home");
		dry.signForm(ppf);
		dry.executeForm(ppf);

		std::cout << "\n-----------\n" << std::endl;

		RobotomyRequestForm rrf("Home");
		dry.signForm(rrf);
		dry.executeForm(rrf);

		std::cout << "\n-----------\n" << std::endl;

		ShrubberyCreationForm scf("Home");
		dry.signForm(scf);
		dry.executeForm(scf);
		std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

//	std::cout << "\n-----------\n" << std::endl;
//
//	try
//	{
//		Bureaucrat supervisor("Supervisor", 5);
//		std::cout << std::endl;
//
//		Form *hex = new RobotomyRequestForm("Archi");
//		supervisor.signForm(*hex);
//		std::cout << *hex << std::endl;
//		supervisor.executeForm(*hex);
//		std::cout << std::endl;
//		delete hex;
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}

	return 0;
}
