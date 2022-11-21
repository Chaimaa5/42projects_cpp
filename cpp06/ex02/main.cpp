#include "Identify.hpp"

int main()
{
    Base* ptr = generate();
    
    identify(ptr);
    identify(*ptr);
    
    // A    a_ptr;
    // Base *base = &a_ptr;
    // //Impossible casting base to derived
    // base = dynamic_cast<A*>(base); //Invalid
    // identify(base);
    delete ptr;
    return 0;
}