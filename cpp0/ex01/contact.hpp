#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>

class Contact{
public:
    int     id;
    std::string  name;
    int     age;
    int     phone;
    
    //Constructors
    Contact(void){};
    ~Contact(void){};

    //functions
    void    print(void);
};
#endif