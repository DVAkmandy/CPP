#include "Convert.hpp"

Convert::~Convert() {}

Convert::Convert(std::string arg) : _arg(arg) {}

Convert::Convert(const Convert& copy) : _arg(copy._arg) {}

Convert& Convert::operator=(const Convert& other) {
	if (this == & other)
		return (*this);
	_arg = other._arg;
	return (*this);
}

std::string Convert::getArg() const {	return (_arg); }

int Convert::toInt() { return (static_cast<int>(toFloat())); }

char Convert::toChar() {
	char charArg;
	if(_arg.length() == 1 && !std::isdigit(_arg[0]))
		return (_arg[0]);
	else
		charArg = static_cast<char>(toFloat());
	return (charArg);
}

float Convert::toFloat() {
	float argFloat;
	if(_arg.length() == 1 && !std::isdigit(_arg[0]))
		return ((float)_arg[0]);
	else
		argFloat = atof(_arg.c_str());
	return (argFloat);
}

double Convert::toDouble() { return (static_cast<double>(toFloat())); }

void Convert::convert()
{

	if (toFloat() < CHAR_MIN || toFloat() > CHAR_MAX || isnan(toFloat())|| isinf(toFloat()))
		std::cout << "char: impossible" << std::endl;
	else if (isprint(toChar()) && toChar() != ' ')
		std::cout << "char: '" << toChar() << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (toInt() < INT_MIN || toInt() > INT_MAX || isnan(toFloat()) || isinf(toFloat()))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << toInt() << std::endl;

	if (toFloat() - toInt() == 0)
	{
		std::cout << "float: " << toFloat() << ".0" << "f" << std::endl;
		std::cout << "double: " << toDouble() << ".0"<< std::endl;
	}
	else
	{
		std::cout << "float: " << toFloat() << "f" << std::endl;
		std::cout << "double: " << toDouble() << std::endl;
	}
}