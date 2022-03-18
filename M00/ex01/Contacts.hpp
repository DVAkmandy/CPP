#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <string>
# include <iostream>
# include <iomanip>

# define LENGTH		10

class Contacts
{
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNumber;
	std::string m_darkestSecret;

public:
	Contacts(void);
	~Contacts(void);

	void	addContacts(void);
	int		checkContact(void);
	void	printTable(int id);
	void	printContact(void);
	int		checkField(const std::string field);
};

#endif
