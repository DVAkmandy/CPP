#include "Contacts.hpp"

Contacts::Contacts() {}
Contacts::~Contacts() {}

void	Contacts::addContacts(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, this->m_firstName);
	while (checkField(this->m_firstName))
	{
		std::cout << "Contact can’t have empty fields. Enter First name: ";
		std::getline(std::cin, this->m_firstName);
	}
	std::cout << "Last name: ";
	std::getline(std::cin, this->m_lastName);
	while (checkField(this->m_lastName))
	{
		std::cout << "Contact can’t have empty fields. Enter Last name: ";
		std::getline(std::cin, this->m_lastName);
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, this->m_nickname);
	while (checkField(this->m_nickname))
	{
		std::cout << "Contact can’t have empty fields. Enter Nickname: ";
		std::getline(std::cin, this->m_nickname);
	}
	std::cout << "Phone number: ";
	std::getline(std::cin, this->m_phoneNumber);
	while (checkField(this->m_phoneNumber))
	{
		std::cout << "Contact can’t have empty fields. Enter Phone number: ";
		std::getline(std::cin, this->m_phoneNumber);
	}
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->m_darkestSecret);
	while (checkField(this->m_darkestSecret))
	{
		std::cout << "Contact can’t have empty fields. Enter Darkest secret: ";
		std::getline(std::cin, this->m_darkestSecret);
	}
}
int Contacts::checkContact()
{
	return (this->m_firstName.empty() && this->m_lastName.empty() && this->m_nickname.empty()
			&& this->m_phoneNumber.empty() && this->m_darkestSecret.empty());
}

int Contacts::checkField(const std::string field)
{
	return (field.empty());
}

void Contacts::printTable(int id)
{
	std::cout << "|" << std::setw(LENGTH) << id + 1;
	if(this->m_firstName.size() > LENGTH)
		std::cout << "|" << std::setw(LENGTH - 1) << this->m_firstName.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(LENGTH) << this->m_firstName;
	if(this->m_lastName.size() > LENGTH)
		std::cout << "|" <<std::setw(LENGTH - 1) << this->m_lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(LENGTH) << this->m_lastName;
	if(this->m_nickname.size() > LENGTH)
		std::cout << "|" <<std::setw(LENGTH - 1) << this->m_nickname.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(LENGTH) << this->m_nickname;
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Contacts::printContact()
{
	std::cout << "Contact information:" << std::endl;
	std::cout << "First name         : " << this->m_firstName << std::endl;
	std::cout << "Last name          : " << this->m_lastName << std::endl;
	std::cout << "Nickname           : " << this->m_nickname << std::endl;
	std::cout << "Phone number       : " << this->m_phoneNumber << std::endl;
	std::cout << "Darkest secret     : " << this->m_darkestSecret << std::endl;
}