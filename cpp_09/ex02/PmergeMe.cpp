#include "PmergeMe.hpp"
#include <algorithm>
#include <vector>

int thres = 100;

static void    checkArg(char *arg)
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

static void    checkDups(std::vector<int> &v)
{
    std::vector<int> dup(v);
    std::sort(dup.begin(), dup.end());
    for (size_t i = 0; i < dup.size() - 1; i++)
    {
        if (dup[i] == dup[i + 1])
            throw std::runtime_error("Error: duplicates found");
    }
}

//put integers from input into vector, integer must be positive else throw exception
static void    parse(std::vector<int> &v, std::deque<int> &d, char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        checkArg(argv[i]);
        v.push_back(std::atoi(argv[i]));
        d.push_back(std::atoi(argv[i]));
    }
    checkDups(v);
}

static void mergeV(std::vector<int>& v, int beg, int mid, int end)
{
    int lengthLeft = mid - beg + 1;
    int lengthRight = end - mid;

    std::vector<int> leftV(lengthLeft);
    std::copy(v.begin() + beg, v.begin() + mid + 1, leftV.begin());

    std::vector<int> rightV(lengthRight);
    std::copy(v.begin() + mid + 1, v.begin() + end + 1, rightV.begin());

    int iL = 0, iR = 0, iV = beg;

    while (iL < lengthLeft && iR < lengthRight)
    {
        if (leftV[iL] <= rightV[iR])
            v[iV++] = leftV[iL++];
        else
            v[iV++] = rightV[iR++];
    }

    while (iL < lengthLeft)
        v[iV++] = leftV[iL++];

    while (iR < lengthRight)
        v[iV++] = rightV[iR++];

}

static void insertV(std::vector<int>& v, int beg, int end)
{
    int i = beg;
    while (i < end)
    {
        int tmpValue = v[i + 1];
        std::vector<int>::iterator iterator = std::lower_bound(v.begin() + beg, v.begin() + i + 1, tmpValue);
        if (iterator != v.begin() + i + 1)
            std::rotate(iterator, v.begin() + i + 1, v.begin() + i + 2);
        *iterator = tmpValue;
        i++;
    }
}

static void sortV(std::vector<int>& v, int beg, int end)
{
    if (end - beg > thres)
    {
        int mid = beg + (end - beg) / 2;
        sortV(v, beg, mid);
        sortV(v, mid + 1, end);
        mergeV(v, beg, mid, end);
    }
    else
    {
        insertV(v, beg, end);
    }
}

static void    printV(std::vector<int>& v)
{
    std::vector<int>::iterator iterator = v.begin();

    for (std::vector<int>::iterator iterator = v.begin(); iterator != v.end(); iterator++)
    {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

void    mergesort(char **argv)
{
    std::vector<int> v;
    std::deque<int> d;

    parse(v, d, argv);
    int beg =  0;
    int end = v.size() - 1;
    printV(v);
    sortV(v, beg, end);
    printV(v);
    // sortD(d, beg, end);
    

}