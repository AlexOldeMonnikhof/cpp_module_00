#ifndef DATA_HPP
# define DATA_HPP

class Data{
private:
    Data();
    unsigned int    value;
public:
    ~Data();

    Data(const Data& other);

    Data& operator=(const Data& other);

    unsigned int    getValue() const;
    void            setValue(unsigned int value);
};

#endif