#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template<typename T>
void easyfind(T &arr, int integer)
{
	try
	{
		typename T::const_iterator it;
		it = std::find(arr.begin(), arr.end(), integer);
		if (it == arr.end())
			throw " not found!";
		std::cout << "Integer: " << integer << " found!" << std::endl;
	}
	catch(const char *e)
	{
		std::cerr << "Integer: " << integer << e << std::endl;
	}
}

#endif
