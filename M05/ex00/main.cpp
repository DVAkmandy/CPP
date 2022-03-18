#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bureaucrat("Dry", 1);
		bureaucrat.highGrade();
		bureaucrat.lowGrade();
		bureaucrat.lowGrade();
	}
	catch (std::exception &ex) {
		std::cerr << "Error: " << ex.what() << std::endl;
	}

	return 0;
}
