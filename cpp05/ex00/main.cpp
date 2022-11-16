#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat B("birbir", 0);
        std::cout << B << std::endl;
        B.decrement();
        B.decrement();
        B.decrement();
        B.increment();
        std::cout << B << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}