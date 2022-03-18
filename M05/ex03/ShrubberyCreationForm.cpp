#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreation", 145, 137), _target("Shrubbery") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreation", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: Form(copy), _target(copy._target)
{
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::string filename = _target + "_shrubbery";
	std::ofstream ofile(filename.c_str());
	if (ofile.is_open() && executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
	{
		ofile
				<< "      ###      " << std::endl
				<< "     #o###     " << std::endl
				<< "   #####o###   " << std::endl
				<< " #o#\\#|#/###  " << std::endl
				<< "  ###\\|/#o#   " << std::endl
				<< "    # }|{ #    " << std::endl
				<< "      }|{      " << std::endl;
		ofile.close();
	}
	else if (!(this->getSign()))
		throw ("The Form not signed!");
	else
		throw Bureaucrat::GradeTooLowException();
}

