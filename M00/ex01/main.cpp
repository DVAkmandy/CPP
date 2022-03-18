#include "Contacts.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string str;
	int 	id = 0;
	PhoneBook book;

	while (1)
	{
		std::cout << "Enter one of the commands ADD, SEARCH or EXIT: " << std::endl;
		std::getline(std::cin,str);
		if (str == "EXIT")
		{
			std::cout << "Thanks, that you used PhoneBook!" << std::endl;
			return 0;
		}
		else if (str == "ADD")
		{
			id = book.checkId(id);
			if (id != 0)
				std::cout << "Contact number in the PhoneBook " << id << std::endl;
			if (id == M_SIZE)
				id = 0;
		}
		else if (str == "SEARCH")
			book.search();
		else
			std::cout << "!!!Incorrect enter!!!" << std::endl;
	}
	return (0);
}
