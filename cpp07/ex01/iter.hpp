#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename F> void Fun(F c)
{
    if (c < 32)
        c = c + 32;
    else
        c = c - 32;
}
template <typename T> void iter(T *addr, T len, void(*F)(T &c))
{
    while(len > 0)
    {
        F(addr[len]);
        len--;
    }
}
#endif