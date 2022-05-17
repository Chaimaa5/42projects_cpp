#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include <string>
#include <iostream>

class PhoneBook{
    int contacts[7];
};

class Contact{
    int     id;
    string name;
    int     number;
};
#endif