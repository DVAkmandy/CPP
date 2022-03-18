#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		std::cout << "Error: Usage: " << argv[0] << " [arg]" << std::endl;
	else
	{
		Convert convert(argv[1]);
		std::cout << std::endl;
		convert.convert();
		std::cout << "\n-----------\n" << std::endl;
	}

	return 0;
}
