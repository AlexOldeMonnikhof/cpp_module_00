#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);


    std::cout << "stack = 5, 17" << std::endl;

    std::cout << "stack top = " << mstack.top() << std::endl;

    std::cout << "popping top" << std::endl;
    mstack.pop();

    std::cout << "size = ";
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator iter = mstack.begin();
    MutantStack<int>::iterator iterEnd = mstack.end();
    
    ++iter;
    --iter;
    std::cout << "stack = ";
    while (iter != iterEnd)
    {
        std::cout << *iter << ", ";
        ++iter;
    }
    std::stack<int> s(mstack);
    return 0;
}
