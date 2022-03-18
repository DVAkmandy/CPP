#include <iostream>
#include "iter.hpp"

template<typename T> void increment(T &t)
{
	t += 2;
}

template<typename T> void printelm(T &t)
{
	std::cout << t << ", ";
}

template<typename T> void printArr(T t[], size_t arrLen, std::string name)
{
	std::cout << name + ":	[";
	::iter(t, arrLen, printelm);
	std::cout << "]" << "\n";
}

int main() {
	char arr[11] = "AbnmghjkuW";
	int b[10] = {2, 8, 0, 2, 0, 0, 0, 0, 1, 2};

	printArr(b, 10, "int");
	::iter(b, 10, increment);
	printArr(b, 10, "int");
	std::cout <<"\n**************************\n" <<std::endl;
	printArr(arr, 10, "char");
	::iter(arr, 10, increment);
	printArr(arr, 10, "char");
	return 0;
}
