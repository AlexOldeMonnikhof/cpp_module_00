#include "BitcoinExchange.hpp"

const char* whitespace = " \f\r\t\v";

void    fillMap(std::map<std::string, float> &dataMap, std::ifstream &dataFile)
{
    std::string	line;
	std::string	date;
	std::string	exchangeRate;
	while (getline(dataFile, line))
	{
		date = line.substr(0, line.find_first_of(","));
		if (date == "date")
			continue;
		exchangeRate = line.substr(line.find_first_of(",") + 1, std::string::npos);
		dataMap[date] = atof(exchangeRate.c_str());
	}
}

void	printExchange(std::string date, std::map<std::string, float> &dataMap, float& valueFloat)
{
	std::map<std::string, float>::iterator	it;
	it = dataMap.lower_bound(date);
	if (it == dataMap.begin() && it->first != date)
		throw std::runtime_error("Error: invalid date.");
    if (it->first != date)
	{
        it--;
	}
	std::cout << it->first << " => " << valueFloat <<  " = " << valueFloat * (*it).second << std::endl;
}

bool    isInt(std::string str)
{
    int i = 0;
    if (str[0] == '+' || str[0] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i++]))
            return false;
    }
    return true;
}

bool    isFloat(std::string str)
{
    int i = 0;
    int dotCount = 0;
    int digitCount = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    for (; str[i]; i++)
    {
        if (str[i] == '.')
        {
            dotCount++;
            continue;
        }
        else if (!isdigit(str[i]))
            return false;
        digitCount++;
    }
    if (digitCount == 0 || dotCount != 1)
        return false;
    return true;
}

void	checkBtcCount(std::string valueStr, float& btcCount)
{
    if  (!isInt(valueStr) && !isFloat(valueStr))
	{
        throw std::runtime_error("Error: value is not a number.");
	}
	btcCount = atof(valueStr.c_str());
	if (btcCount < 0 || btcCount > 1000)
		throw std::runtime_error("Error: value must be from 0 to 1000.");

}

int	daysInMonth(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    //LEAPYEAR
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        return 29;
    return 28;
}

void	checkDate(std::string date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		throw std::runtime_error("Error: invalid date.");
	for (std::size_t i = 0; i != date.size(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			throw std::runtime_error("Error: invalid date.");;
	}
	int	day = std::atoi((date.substr(8, 2)).c_str());
	int	month = std::atoi((date.substr(5, 2)).c_str());
	int	year = std::atoi((date.substr(0, 4)).c_str());
	if (day < 1 || day > daysInMonth(month, year) || month < 1 || month > 12 || year < 1)
		throw std::runtime_error("Error: invalid date.");
}

std::string parseValue(std::string line, size_t pipe)
{
    std::string value;
	value = line.substr(pipe + 1, line.size());
    value.erase(0, value.find_first_not_of(whitespace));
    value.erase(value.find_last_not_of(whitespace) + 1, value.size());
    return value;
}

std::string parseDate(std::string line, size_t pipe)
{
    std::string date;
	date = line.substr(0, pipe);
    date.erase(0, date.find_first_not_of(whitespace));
    date.erase(date.find_last_not_of(whitespace) + 1, date.size());
    return date;
}

void    bitcoin_exchange(std::ifstream &input, std::map<std::string, float> &dataMap)
{
    std::string	line;
	std::string	date;
	std::string	value;
	std::size_t	pipe;

	while (getline(input, line))
	{
		pipe = line.find_first_of("|");
		if (pipe == std::string::npos || line.size() < 12)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
        date = parseDate(line, pipe);
		if (date == "date")
			continue;
		value = parseValue(line, pipe);
        if (value.size() == 0)
        {
            std::cout << "Error: no value given." << std::endl;
            continue;
        }
		try
		{
            float   btcCount;
			checkDate(date);
			checkBtcCount(value, btcCount);
			printExchange(date, dataMap, btcCount);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
