#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "phonebook.hpp"
#include "contact.hpp"

class Phonebook{
    public: Contact contact[7];
    std::string trim(std::string str);
};
#endif