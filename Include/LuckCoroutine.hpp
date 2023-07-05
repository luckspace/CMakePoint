#pragma once
//  std
#include <string>

#if     defined(_WIN64)
#ifndef LUCK_COROUTINE_BUILD
#define LUCK_COROUTINE_API __declspec(dllimport)
#else
#define LUCK_COROUTINE_API __declspec(dllexport)
#endif
#elif   defined(__linux__)
#define LUCK_COROUTINE_API
#else
#define LUCK_COROUTINE_API
#endif

namespace luck::co
{
    class LUCK_COROUTINE_API Info
    {
    protected:
        static ::std::string s_info;
    public:
        inline const ::std::string InfoString() const { return s_info; }
    };
}
