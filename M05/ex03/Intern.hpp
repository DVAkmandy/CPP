#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string 	arrForm[3];
	Form *(Intern::*func[3])(std::string target);

	Form * newSCF(std::string target);
	Form * newRRF(std::string target);
	Form * newPPF(std::string target);

public:
	Intern();
	~Intern();

	Form * makeForm(std::string name, std::string target);

	class FormNotFoundException : public std::exception
	{
		const char *what() const throw() { return "Form not found!"; };
	};
};


#endif //EX03_INTERN_HPP
