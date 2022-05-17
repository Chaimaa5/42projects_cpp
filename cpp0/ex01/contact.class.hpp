#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string.h>

class Contact{

    int     id;
    char    name[50];
    int     age;
    int     phone;
    
    //Constructors
    Contact(void);
    ~Contact(void);

    //functions
    void    print(void);
};
#endif