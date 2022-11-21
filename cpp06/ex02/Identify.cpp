#include "Identify.hpp"

Base::~Base()
{
    std::cout << "Base deleted\n";
}

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

void    CheckA(Base* p)
{

    p = dynamic_cast<A*>(p);    
    if (p)
        std::cout << "The type is: A" << std::endl;
}

void    CheckB(Base* p)
{
     p = dynamic_cast<B*>(p);
    if (p)
        std::cout << "The type is: B" << std::endl;
}

void    CheckC(Base* p)
{
    p = dynamic_cast<C*>(p);
    if (p)
        std::cout << "The type is: C" << std::endl;
}

void identify(Base* p){
    CheckA(p);
    CheckB(p);
    CheckC(p);
}

void    CheckARef(Base& p)
{
    try{
        p = dynamic_cast<A&>(p);
        std::cout << "The type is: A" << std::endl;
    }catch(const std::bad_cast &e){
        std::cerr << "Exception " << e.what() << " thrown." << std::endl;
        std::cerr << "Object is not of type A" << std::endl;    
    }
}

void    CheckBRef(Base& p)
{
    try{
        p = dynamic_cast<B&>(p);
        std::cout << "The type is: B" << std::endl;
    }catch(const std::bad_cast &e){
        std::cerr << "Exception " << e.what() << " thrown." << std::endl;
        std::cerr << "Object is not of type B" << std::endl;    
    }
}

void    CheckCRef(Base& p)
{
    try{
        p = dynamic_cast<C&>(p);
        std::cout << "The type is: C" << std::endl;
    }catch(const std::bad_cast &e){
        std::cerr << "Exception " << e.what() << " thrown." << std::endl;
        std::cerr << "Object is not of type C" << std::endl;    
    }
}

void identify(Base& p){
   CheckARef(p);
   CheckBRef(p);
   CheckCRef(p);
}