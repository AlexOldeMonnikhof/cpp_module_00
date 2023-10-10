#include "../inc/Replace.hpp"

Replace::Replace(const char* file, const char* s1, const char* s2)
{
	this->s1 = s1;
	this->s2 = s2;
	inputFile.open(file);
	if (!inputFile.good())
	{
		cout << "error while trying to open " << file << endl;
		return;
	}
	if (inputFile.peek() == EOF)
	{
		cout << file << " is empty..." << endl;
		return;
	}
	string outputFileName = string(file) + ".replace";
	outputFile.open(outputFileName.c_str());
	if (!outputFile.good())
	{
		cout << "error while trying to open " << outputFileName << endl;
		return;
	}
	fill_outputFile();
}

Replace::~Replace()
{
	inputFile.close();
	outputFile.close();
}

void	Replace::fill_outputFile()
{
	string	line;
	size_t	pos;

	while (getline(inputFile, line))
	{
		pos = line.find(s1);
		while (pos != string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		outputFile << line;
		if (!inputFile.eof())
			outputFile << endl;
	}
}
