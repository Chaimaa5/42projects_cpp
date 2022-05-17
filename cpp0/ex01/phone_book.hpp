#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include <string.h>
#include <iostream>

class PhoneBook{
    int contacts[7];
};

class Contact{
    int     id;
    char name;
    int     number;
};
#endif