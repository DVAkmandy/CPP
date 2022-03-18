#include "Array.hpp"

int main()
{
	Array<int>		intArray(5);
	Array<double>	doubleArray(5);

	for (unsigned int count = 0; count < intArray.getSize(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
		std::cout << "Int: " << intArray[count] << " |  double: " << doubleArray[count] << std::endl;
	}
	std::cout <<"\n**************************\n" <<std::endl;
	try
	{
		for (unsigned int count = 0; count < intArray.getSize() + 1; ++count)
		{
			std::cout << "Int: " << intArray[count] << " | double: " << doubleArray[count] << std::endl;
		}
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
