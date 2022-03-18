#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen message;

	if (argc != 2)
		std::cerr << "Check the input parameters!" << std::endl;
	else
		message.complain(argv[1]);

	return 0;
}
