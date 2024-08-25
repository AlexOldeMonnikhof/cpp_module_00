#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    n = 0;
    array = new T[n];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->n = n;
    array = new T[n];
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}

template <typename T>
Array<T>::Array(const Array<T>& other)
{
    n = other.size();
    array = new T[n];
    for (size_t i = 0; i < n; i++)
        array[i] = other.arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
	{
		delete[] array;
		n = other.size();
		array = new T[n];
		for (unsigned int i = 0; i < n; i++)
			array[i] = other.array[i];
	}
	return (*this);
}

template <typename T>
T&  Array<T>::operator[](unsigned int i)
{
    if (i >= n)
        throw(OutOfBoundsException());
    return (array[i]);
}

template <typename T>
unsigned int    Array<T>::size() const
{
    return (n);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return ("Error: Out of Bounds");
}