#ifndef DATA_HPP
# define DATA_HPP

class Data{
private:
    int    value;
public:
    Data();
    Data(int value);

    ~Data();

    Data(const Data& other);

    Data& operator=(const Data& other);

    int getValue() const;
};

#endif