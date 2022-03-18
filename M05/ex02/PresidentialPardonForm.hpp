#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string	_target;

public:
	PresidentialPardonForm();
	explicit PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& copy);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
	void execute(Bureaucrat const & executor) const;
};


#endif
