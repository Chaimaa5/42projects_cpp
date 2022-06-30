#include "phonebook.class.hpp"

//Default Constructor
Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

bool Phonebook::isFull()
{
    if (id >= 7)
        return (true);
    else 
        return (false);
}