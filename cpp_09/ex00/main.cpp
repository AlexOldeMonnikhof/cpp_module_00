#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	std::map<std::string, float>	dataMap;

    if (argc != 2)
    {
        std::cerr << "Error: wrong amount of arguments" << std::endl;
        return 1;
    }
    std::ifstream   inputFile(argv[1]);
    std::ifstream   dataFile("data.csv");
    if (!inputFile.is_open() || !dataFile.is_open())
    {
        std::cerr << "Error: could not open file(s)" << std::endl;
        return 1;
    }
    fillMap(dataMap, dataFile);
    bitcoin_exchange(inputFile, dataMap);
    inputFile.close();
    dataFile.close();
    return 0;
}
