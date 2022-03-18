#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::endl;
	try {
		Intern someRandomIntern;
		Form *ppf;

		ppf = someRandomIntern.makeForm("Presidential Pardon", "Home");
		Bureaucrat dry("dry", 1);
		dry.signForm(*ppf);
		dry.executeForm(*ppf);
		std::cout << std::endl;
		delete ppf;

		std::cout << "\n-----------\n" << std::endl;

		ppf = someRandomIntern.makeForm("RobotomyReques", "Home");
		dry.signForm(*ppf);
		dry.executeForm(*ppf);
		delete ppf;
	}
	catch (std::exception &e) {
		std::cerr
				<< "Error: " << e.what() << std::endl;
	}

	return 0;
}
