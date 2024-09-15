#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <cstdlib>
# include <algorithm>

class Span
{
    private:
        Span();
        unsigned int N;
        std::vector<int> v;
    public:

        Span(unsigned int N);
        Span(const Span& other);
        ~Span();
        Span& operator=(const Span& other);
        
        class VectorIsFullException : public std::exception{
            public:
                const char *what() const throw();
        };

        class NoSpanFoundException : public std::exception{
            public:
                const char *what() const throw();
        };

        unsigned int    getN() const;
        void            addNumber(int value);
        unsigned int    shortestSpan() const;
        unsigned int    longestSpan() const;

        void            fillVector();
        void            printVector() const;
};

#endif