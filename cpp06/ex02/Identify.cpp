#include "Identify.hpp"

Base* generate(void){
    Base* ptr;

    srand(time(NULL));
    int random =  1 +(rand() % 3);

    std::cout << random << std::endl;
    if (random == 1)
        ptr = new A;
    if (random == 2)
        ptr = new B;
    if (random == 3)
        ptr = new C;
    return (ptr);
}

void    CheckA(Base* p)
{

    p = dynamic_cast<A*>(p);    
    if (p)
        std::cout << "Right guess is Type A" << std::endl;
}

void    CheckB(Base* p)
{
     p = dynamic_cast<B*>(p);
    if (p)
        std::cout << "Right guess is Type B" << std::endl;
}

void    CheckC(Base* p)
{
    p = dynamic_cast<C*>(p);
    if (p)
        std::cout << "Right guess is Type C" << std::endl;
}

void identify(Base* p){
    CheckA(p);
    CheckB(p);
    CheckC(p);
}

void identify(Base& p){
(void)p;
}