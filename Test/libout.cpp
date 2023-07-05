#include <LuckCoroutine.hpp>

int main()
{
    luck::co::Info info;
    if (info.InfoString() != "$null")
        return -1;
    else
        return 0;
}
