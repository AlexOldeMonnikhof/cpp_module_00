#include "MutantStack.hpp"

int main()
{
    std::cout << "------------STACK-----------" << std::endl;
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

        std::cout << "pushing 3, 5, 737, 0" << std::endl;
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
            if (iter == iterEnd - 1)
                std::cout << *iter << std::endl;
            else
                std::cout << *iter << ", ";
            ++iter;
        }

        std::stack<int> s(mstack);
    }
    std::cout << "------------LIST------------" << std::endl;
    {
        //stack: push, pop
        //list: push_back, pop_back

        std::list<std::string> mlist;

        mlist.push_back("bob");
        mlist.push_back("john");


        std::cout << "stack = bob, jonn" << std::endl;
        std::cout << "stack top = " << mlist.back() << std::endl;

        std::cout << "popping top" << std::endl;
        mlist.pop_back();

        std::cout << "size = ";
        std::cout << mlist.size() << std::endl;

        std::cout << "pushing tom, peter, rick, max" << std::endl;
        mlist.push_back("tom");
        mlist.push_back("peter");
        mlist.push_back("rick");
        //[...]
        mlist.push_back("max");

        //no need to create our own end() or begin()
        std::list<std::string>::iterator iter = mlist.begin();

        ++iter;
        --iter;

        std::cout << "stack = ";
        while (iter != mlist.end())
        {
            if (iter == --mlist.end())
                std::cout << *iter << std::endl;
            else
                std::cout << *iter << ", ";
            ++iter;
        }

        std::list<std::string> s(mlist);
    }   
    return 0;
}
