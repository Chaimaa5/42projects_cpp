#include "Bureaucrat.hpp"

int main()
{
    try{   
        Bureaucrat *B = new Bureaucrat("B", 21);
        std::cout << *B;
        B->decrement();
        B->decrement();
        B->decrement();
        B->increment();
        std::cout << *B;
    }
    catch(const std::exception &e){
        std::cerr << e.what() <<std::endl;
    }
    return 0;
}