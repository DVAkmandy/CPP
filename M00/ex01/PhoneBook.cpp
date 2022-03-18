#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

int PhoneBook::checkId(int id)
{
	std::cout << "Fill in the fields: " << std::endl;
	this->m_contact[id].addContacts();
	if (!this->m_contact[id].checkContact())
	{
		std::cout << "You added " << 1 << " contact"<< std::endl;
		return (id + 1);
	}
	else
		std::cout << "Contact fields are empty!" << std::endl;
	return (id);
}

void PhoneBook::search(void)
{
	std::string id;
	int		idVal;

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for(int i = 0; i < M_SIZE; i++)
	{
		if (!this->m_contact[i].checkContact())
			this->m_contact[i].printTable(i);
	}
	std::cout << "Enter contact index: ";
	std::getline(std::cin, id);
	idVal = atoi(id.c_str());
	if (idVal < 1 || idVal > M_SIZE)
	{
		std::cout << "There is no such contact!" << std::endl;
		return ;
	}
	if (this->m_contact[idVal-1].checkContact())
		std::cout << "The contact is empty" << std::endl;
	else
		this->m_contact[idVal-1].printContact();
}
