#include "phonebook.hpp"

int main()
{
    char msg[512];

    std::cout << "Please enter your request ADD, SEARCH or EXIT:" << std::endl;
    std::cin >> msg;
    if (!strcmp(msg, "EXIT"))
        std::cout << "bye" << std::endl;
    else if (!strcmp(msg, "ADD"))
    {
        
    }
    else if (!strcmp(msg, "SEARCH"))
    {

    }
    else
        std::cout << "Sorry we didn't recognize your request!" << std::endl;
    return (0);
}