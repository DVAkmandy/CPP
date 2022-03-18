#include "Intern.hpp"

Intern::Intern() {
	this->arrForm[0] = "Shrubbery Creation";
	this->arrForm[1] = "Robotomy Reques";
	this->arrForm[2] = "Presidential Pardon";

	this->func[0] = &Intern::newSCF;
	this->func[1] = &Intern::newRRF;
	this->func[2] = &Intern::newPPF;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Form *Intern::newPPF(std::string target) { return (new PresidentialPardonForm(target)); }

Form *Intern::newSCF(std::string target) { return (new ShrubberyCreationForm(target)); }

Form *Intern::newRRF(std::string target) { return (new RobotomyRequestForm(target)); }

Form	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == this->arrForm[i])
		{
			std::cout <<  "Intern creates " << name << std::endl;
			return ((this->*func[i])(target));
		}
	}
	throw FormNotFoundException();
}