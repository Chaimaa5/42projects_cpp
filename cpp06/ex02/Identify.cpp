#include "Identify.hpp"

Base* generate(void){
    Base* ptr;

    srand(time(NULL));
    int random =  1 +(rand() % 3);

    if (random == 1)
        ptr = new A;
    if (random == 2)
        ptr = new B;
    if (random == 3)
        ptr = new C;
    return (ptr);
}

void identify(Base* p){

}

void identify(Base& p){

}