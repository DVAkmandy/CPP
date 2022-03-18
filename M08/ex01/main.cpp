#include "Span.hpp"

int main()
{

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n--------------------------\n" << std::endl;

	try {
		Span span(7);
		span.addNumber(88);
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--------------------------\n" << std::endl;
	try {
		Span span(5);
		std::vector<int> tmp;
		tmp.push_back(-15);
		tmp.push_back(-1);
		tmp.push_back(17);
		tmp.push_back(49);
		tmp.push_back(10);
		span.addNumber(tmp, 5);
		std::cout << "Shortest span: "<< span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--------------------------\n" << std::endl;

	srand(time(NULL));
	Span span_ten = Span(10000);
	span_ten.addNumber(0);
	for (int i = 0; i < 9999; i++)
		span_ten.addNumber(rand() % 50000);

	std::cout << "Shortest span: " << span_ten.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span_ten.longestSpan() << std::endl;

	return (0);
}
