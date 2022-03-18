#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardon", 25, 5), _target("Pardon") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: Form(copy), _target(copy._target)
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}


