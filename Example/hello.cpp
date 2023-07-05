#include <iostream>
#include <LuckCoroutine.hpp>

int main()
{
    luck::co::Info co_info;
    ::std::cout << "hello " << co_info.InfoString() << ::std::endl;
}
