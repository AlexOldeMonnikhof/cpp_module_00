#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include "Data.hpp"

class Data{
private:
    Data();
public:
    ~Data();

    Data(const Data& other);

    Data& operator=(const Data& other);


};

#endif