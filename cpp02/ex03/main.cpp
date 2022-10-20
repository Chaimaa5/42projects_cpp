#include "Point.hpp"
int main( void ) 
{
    Point A(0, 0);
    Point B(10, 30);
    Point C(20,0);
    Point P(0, 0);
    if (bsp(A, B, C, P))
        std::cout << "P is Inside";
    else
        std::cout << "P is Outside";
    return 0;
}
