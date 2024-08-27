#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iostream>

template <typename T>
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
                this.c = other.c;
            return (*this);
        };

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