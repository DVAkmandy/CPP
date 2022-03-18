#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"
# define M_SIZE 8

class PhoneBook
{
private:
	Contacts m_contact[M_SIZE];

public:
	PhoneBook(void);
	~PhoneBook(void);

	int	checkId(int id);
	void search(void);
};


#endif
