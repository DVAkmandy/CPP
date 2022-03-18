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
	Form &operator=(Form const &other);

public:
	Form();
	explicit Form(const std::string &name, int gradeToSign, int gradeToExecute, bool sign = false);
	Form(Form const &copy);
	~Form();

	const std::string &getName() const {return (this->_name);}
	bool getSign() const {return (this->_sign);}
	int getGradeToSign() const {return (this->_gradeToSign);}
	int getGradeToExecute() const {return (this->_gradeToExecute);}
	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw() {return "the Grade Form is too high!";}
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw() {return "the Grade Form is too low!";}
	};
};
	std::ostream& operator<<(std::ostream & out, Form const& f);

#endif