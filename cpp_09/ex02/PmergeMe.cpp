#include "PmergeMe.hpp"
#include <algorithm>
#include <ctime>
#include <vector>

# define BEFORE 0
# define AFTER 1
# define VECTOR 2
# define DEQUE 3

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
    if (n < 1 || n > INT32_MAX)
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

template <typename Container>
static void mergeContainer(Container& c, int beg, int mid, int end)
{
    int lengthLeft = mid - beg + 1;
    int lengthRight = end - mid;

    Container leftC(lengthLeft);
    std::copy(c.begin() + beg, c.begin() + mid + 1, leftC.begin());

    Container rightC(lengthRight);
    std::copy(c.begin() + mid + 1, c.begin() + end + 1, rightC.begin());

    int iL = 0, iR = 0, iV = beg;

    while (iL < lengthLeft && iR < lengthRight)
    {
        if (leftC[iL] <= rightC[iR])
            c[iV++] = leftC[iL++];
        else
            c[iV++] = rightC[iR++];
    }

    while (iL < lengthLeft)
        c[iV++] = leftC[iL++];

    while (iR < lengthRight)
        c[iV++] = rightC[iR++];

}

template <typename Container>
static void insertContainer(Container& c, int beg, int end)
{
    int i = beg;
    while (i < end)
    {
        int tmpValue = c[i + 1];
       typename Container::iterator iterator = std::lower_bound(c.begin() + beg, c.begin() + i + 1, tmpValue);
        if (iterator != c.begin() + i + 1)
            std::rotate(iterator, c.begin() + i + 1, c.begin() + i + 2);
        *iterator = tmpValue;
        i++;
    }
}

template <typename Container>
static void sortContainer(Container& c, int beg, int end)
{
    if (end - beg > thres)
    {
        int mid = beg + (end - beg) / 2;
        sortContainer(c, beg, mid);
        sortContainer(c, mid + 1, end);
        mergeContainer(c, beg, mid, end);
    }
    else
    {
        insertContainer(c, beg, end);
    }
}

template <typename Container>
static void printContainer(Container& c, int status)
{
    int count = 0;
    if (status == BEFORE)
        std::cout << "Before : ";
    if (status == AFTER)
        std::cout << "After  : ";
    for (typename Container::iterator iterator = c.begin(); iterator != c.end(); iterator++)
    {
        if (count > 8)
        {
            std::cout << "[...]";
            break ;
        }
        std::cout << *iterator << " ";
        count++;
    }
    std::cout << std::endl;
}

static void printTime(int argc, clock_t startTime, clock_t endTime, int container)
{
    //million for microseconds
    double time = 1000000.0 * (endTime - startTime) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << argc -1 << " element(s) with ";
    if (container == VECTOR)
        std::cout << "std::vector : ";
    if (container == DEQUE)
        std::cout << "std::deque : ";
    std::cout << time << "μs" << std::endl;
}

template <typename Container>
static void mergesort(Container& c)
{
    int beg =  0, end = c.size() - 1;
    sortContainer(c, beg, end);
}

void    handleContainers(int argc, char **argv)
{
    std::vector<int> v;
    std::deque<int> d;
    clock_t startTime, endTime;

    parse(v, d, argv);
    printContainer(v, BEFORE);
    startTime = clock();
    mergesort(v);
    endTime = clock();
    printContainer(v, AFTER);
    printTime(argc, startTime, endTime, VECTOR);
    startTime = clock();
    mergesort(d);
    endTime = clock();
    printTime(argc, startTime, endTime, DEQUE);
}
