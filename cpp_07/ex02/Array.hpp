#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T               *array;
        unsigned int    n;
    public:
        Array();
        Array(unsigned int n);
        
        ~Array();

        Array(const Array& other);
        Array& operator=(const Array& other);

		T&  operator[](unsigned int i);
    
        unsigned int    size() const;
};


#endif