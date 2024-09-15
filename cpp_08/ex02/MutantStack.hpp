#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
//std::stack by default uses std::deque as container type
//so no need to specify it like std::stack<T, std::deque<T>>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){};
        MutantStack(const MutantStack& other)
        {
            *this = other;
        };

        ~MutantStack(){};

        MutantStack& operator=(const MutantStack& other)
        {
            if (this != &other)
                this->c = other.c;
            return (*this);
        };

        //container_type = std::deque so could also define as std::deque<T>::iterator
        //using container_type is more flexible > will work when changing underlying container
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator	begin()
        {
            return (this->c.begin());
        }
        
        iterator	end()
        {
            return (this->c.end());
        }
};

#endif