#include <iostream>

#include "win_co_coroutrin.h"

constexpr char AString[] = "ori.luck.class.A";

class A : public luck::LuckTempObj<A, AString> {

};

int main()
{
	::std::cout << "hello world" << ::std::endl;

	A a;
	::std::cout << a.Scope() << ::std::endl;
}
