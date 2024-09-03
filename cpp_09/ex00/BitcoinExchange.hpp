#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <cstdlib>


void    fillMap(std::map<std::string, float> &dataMap, std::ifstream &dataFile);
void    bitcoin_exchange(std::ifstream &input, std::map<std::string, float> &dataMap);

#endif