#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string.h>
#include <cstdlib>
#include <iostream>
#include "contact.hpp"
#include <iomanip>

class Phonebook{
    public: 
        Contact contact[8];
        std::string trim(std::string str);
        void	print(Contact contact);

};

#endif