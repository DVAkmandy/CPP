#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequest", 72, 45), _target("Robot") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: Form(copy), _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
	{
		std::srand(time(nullptr));
		std::cout << "DRRRRRR" << std::endl;
		if (std::rand() % 2)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Error: " << _target << " has not been robotomized" << std::endl;
	}
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}
