
#include "Form.hpp"

Form::Form() : _name("Form 0"), _gradeToSign(150), _gradeToExecute(150), _sign(false){}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute, bool sign)
		: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _sign(sign)
{
	std::cout << *this << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();

}

Form::Form(const Form &copy)
      : _name(copy._name), _gradeToSign(copy._gradeToSign),
	  _gradeToExecute(copy._gradeToExecute), _sign(copy._sign)
{}

Form::~Form()
{
	std::cout << "Form " << _name << " deleted." << std::endl;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_gradeToSign >= bureaucrat.getGrade())
		_sign = true;
	else
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return (*this);
	const_cast<std::string &>(this->_name) = other._name;
	const_cast<int &>(this->_gradeToSign) = other._gradeToSign;
	const_cast<int &>(this->_gradeToExecute) = other._gradeToExecute;
	this->_sign = other._sign;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, Form const &f)
{
	out << "Form: " + f.getName()
		<< (f.getSign() ? ", signed" : ", not signed")
		<< ". Grade required to sign: " << f.getGradeToSign()
		<< ". Grade required to execute: " << f.getGradeToExecute();
	return out;
}
