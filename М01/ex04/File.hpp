#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

class File {
private:
	std::ifstream _inFile;
	std::ofstream _outFile;

public:
	explicit File(const std::string& iName);
	~File();

	void replace(const std::string& s1, const std::string& s2);
	static std::string replaceLine(std::string line, const std::string& from, const std::string& to);
};

#endif
