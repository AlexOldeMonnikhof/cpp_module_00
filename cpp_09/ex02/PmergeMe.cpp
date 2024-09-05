#include "PmergeMe.hpp"

void    checkArg(char *arg)
{
    std::string s(arg);
    s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));
    s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1, s.length());
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]))
            throw std::runtime_error("Error: values must be positive integers");
    }
    long long n = std::atoll(s.c_str());
    if (n < 0 || n > INT32_MAX)
        throw std::runtime_error("Error: values must be positive integers");
}

//put integers from input into vector, integer must be positive else throw exception
void    parse(std::vector<int> &v, std::deque<int> &d, char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        checkArg(argv[i]);
        v.push_back(std::atoi(argv[i]));
        d.push_back(std::atoi(argv[i]));
    }
}

void    checkDups(std::vector<int> &v)
{
    std::sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
            throw std::runtime_error("Error: duplicates found");
    }
}

void    mergesort(char **argv)
{
    std::vector<int> v;
    std::deque<int> d;

    parse(v, d, argv);
    //print vector
    

    checkDups(v);
}