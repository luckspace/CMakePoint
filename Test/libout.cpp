#include <LuckCoroutine.hpp>

#include <iostream>

int main()
{
    luck::co::Info info;

    ::std::cout << info.InfoString() << ::std::endl;
    
    if (info.InfoString() != "$null")
        return -1;
    else
        return 0;
}
