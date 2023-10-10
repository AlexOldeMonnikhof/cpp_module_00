#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;

class Replace{
private:
	ifstream	inputFile;
	ofstream	outputFile;
	string		s1;
	string		s2;
public:
	Replace(const char* file, const char* s1, const char* s2);
	~Replace();
	void	fill_outputFile();
};

#endif