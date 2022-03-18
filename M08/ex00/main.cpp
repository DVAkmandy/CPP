#include "Easyfind.hpp"

int main()
{

	srand(time(NULL));
	std::vector<int> arr;

	int find_integer = rand() % 50;
	for (int i = 0; i < 20; i++)
		arr.push_back(rand() % 50);
	for (int i = 0; i < 20; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "Integer search: " << find_integer << std::endl;
	easyfind(arr, find_integer);

	return 0;
}