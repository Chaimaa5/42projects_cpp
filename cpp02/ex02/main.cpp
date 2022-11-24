#include "Fixed.hpp"
int main( void ) 
{
    Fixed a();
    Fixed c(30);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    //wrong result from fixed float constructor
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}