#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat B("birbir", 1);
        std::cout << B << std::endl;
        B.decrement();
        B.increment();
        B.increment();
        B.decrement();
        // std::cout << B << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}