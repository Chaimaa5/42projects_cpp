#include "iter.hpp"

int main()
{
    int d[6] = {1, 5, 6, 8, 9, 0};
    ::iter(d, 6, ::Fun);
    std::cout <<  "d = " << d[0] << std::endl;
    return (0);
}