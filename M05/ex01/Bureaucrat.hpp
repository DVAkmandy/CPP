#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string	_name;
	int 		_grade;

public:
	Bureaucrat();
	explicit Bureaucrat(const std::string &name, int grade = 0);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &other);
	~Bureaucrat();

	std::string getName() const {return this->_name;}
	int getGrade() const {return this->_grade;}

	void lowGrade ();
	void highGrade();

	void signForm(Form &f);

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw() {return "the Grade Bureaucrat is too high!";}
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw() {return "the Grade Bureaucrat is too low!";}
	};


};
	std::ostream& operator<<(std::ostream & out, Bureaucrat const& i);

#endif
