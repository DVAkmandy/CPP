#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	const int			_gradeToSign;
	const int 			_gradeToExecute;
	bool 				_sign;

public:

	Form();
	explicit Form(const std::string &name, int gradeToSign, int gradeToExecute, bool sign = false);
	Form(Form const &copy);
	virtual ~Form();
	const std::string &getName() const {return (this->_name);}

	Form &operator=(Form const &other);
	bool getSign() const {return (this->_sign);}
	int getGradeToSign() const {return (this->_gradeToSign);}
	int getGradeToExecute() const {return (this->_gradeToExecute);}
	void beSigned(Bureaucrat const &bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){};
		virtual ~GradeTooHighException()  throw(){};

		virtual const char *what() const throw() {return "the Grade Form is too high!";}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){};
		virtual ~GradeTooLowException()  throw(){};

		virtual const char *what() const throw() {return "the Grade Form is too low!";}
	};
};
	std::ostream& operator<<(std::ostream & out, Form const& f);

#endif