#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	std::cout << *this << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) { (*this) = copy;}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	const_cast<std::string &>(this->_name) = other._name;
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() { _grade = 0; }

void Bureaucrat::lowGrade()
{
	_grade--;
	std::cout << *this << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::highGrade()
{
	_grade++;
	std::cout << *this << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &i)
{
	return out << "Bureaucrat: " << i.getName() << " grade: " << i.getGrade();
}
