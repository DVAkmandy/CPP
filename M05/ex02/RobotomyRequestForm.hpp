#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string	_target;

public:
	RobotomyRequestForm();
	explicit RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
	void execute(Bureaucrat const & executor) const;
};

#endif