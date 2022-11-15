#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try{
        Bureaucrat B("B", 1);
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