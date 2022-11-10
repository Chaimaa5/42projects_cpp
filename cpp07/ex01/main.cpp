#include "iter.hpp"

int main()
{
    ::iter(d, 2, Fun);
    std::cout <<  "d = " << d[0] << std::endl;
    return (0);
}