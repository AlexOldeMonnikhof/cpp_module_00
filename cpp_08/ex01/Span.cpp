#include "Span.hpp"

Span::Span() : N(42)
{

}

Span::Span(unsigned int N) : N(N)
{

}

Span::Span(const Span& other)
{
    *this = other;
}

Span::~Span()
{

}

const char *Span::VectorIsFullException::what() const throw()
{
    return ("SPAN IS FULL");
}

const char *Span::NoSpanFoundException::what() const throw()
{
    return ("NO SPAN FOUND");
}

Span&   Span::operator=(const Span& other)
{
    if (this != &other)
        N = other.getN();
    return *this;
}

unsigned int    Span::getN() const
{
    return N;
}

void    Span::addNumber(int value)
{
    if (v.size() >= N)
        throw (VectorIsFullException());
    v.push_back(value);
}

unsigned int Span::shortestSpan() const
{
    if (v.size() < 2)
        throw (NoSpanFoundException());
    std::vector<int> tmpV(v);
    std::sort(tmpV.begin(), tmpV.end());
    int shortestSpan = tmpV[1] - tmpV[0];
    for (size_t i = 1; i < tmpV.size() - 1; i++)
    {
        if (tmpV[i + 1] - tmpV[i] < shortestSpan)
            shortestSpan = tmpV[i + 1] - tmpV[i];
    }
    return (shortestSpan);
}

unsigned int Span::longestSpan() const
{
    if (v.size() < 2)
        throw (NoSpanFoundException());
    std::vector<int> tmpV(v);
    std::sort(tmpV.begin(), tmpV.end());
    return (tmpV[tmpV.size() - 1] - tmpV[0]);
}

void    Span::fillVector()
{
    srand(time(NULL));
    while (v.size() < N)
        v.push_back(rand() * rand());
}

void    Span::printVector() const
{
    if (!v.size())
        std::cerr << "can't print empty vector. fill it first";
    for (unsigned int i = 0; i < v.size(); i++)
            std::cout << v[i] << " ";
    std::cout << std::endl;
}
