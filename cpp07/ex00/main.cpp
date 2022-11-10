#include "Header.hpp"

int main()
{
    int x = 20; 
    int y = 30;

    std::cout << max<int>(78, 243) << std::endl;
    std::cout << min<int>(7345, 565) << std::endl;
    std::cout << max<float>(2.43, 3.22) << std::endl;
    std::cout << min<float>(2.43, 3.22) << std::endl;

    swap<int>(x, y);
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;}