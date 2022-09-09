#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>

class Contact{
public:
    int         id;
    std::string  name;
    int             age;
    int     phone;
    
    void    print(void);
};
#endif