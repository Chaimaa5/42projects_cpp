#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *B = new Bureaucrat("B", 100);
    (void)B;
    std::cout << B->getGrade() << std::endl;
    B->decrement();
    B->decrement();
    B->decrement();
    B->increment();
    std::cout << B->getGrade()<< std::endl;
    return 0;
}