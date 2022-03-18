#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <climits>

class Convert {
private:
	std::string _arg;
	Convert();

public:
	~Convert();
	Convert(std::string arg);
	Convert(const Convert& copy);
	Convert& operator=(const Convert& other);

	std::string getArg() const;
	int			toInt();
	char		toChar();
	float		toFloat();
	double		toDouble();
	void		convert();
};

#endif
