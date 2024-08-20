#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array
{
    private:
        T               *array;
        unsigned int    size;
    public:
        Array();
        Array(unsigned int n);

    unsigned int    size() const;
};

#endif