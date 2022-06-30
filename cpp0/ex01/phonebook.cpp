#include "phonebook.hpp"

int main()
{
    char msg[512];
    Contact contact;

    std::cout << "Please enter your request ADD, SEARCH or EXIT:" << std::endl;
    std::cout << "1) ADD" << std::endl;
    std::cout << "2) SEARCH" << std::endl;
    std::cout << "3) EXIT" << std::endl;
    std::cin >> msg;
    if (!strcmp(msg, "EXIT"))
        std::cout << "See you next time" << std::endl;
    else if (!strcmp(msg, "ADD"))
    {
        std::cout << "Please enter contact's name:" << std::endl;
        std::cin >> contact.name;
        std::cout << "Please enter contact's age:" << std::endl;
        std::cin >> contact.age;
        std::cout << "Please enter contact's phone number:" << std::endl;
        std::cin >> contact.phone;
        std::cout << "Contact added successfuly!" << std::endl;
    }
    else if (!strcmp(msg, "SEARCH"))
    {
        std::cout << "Please enter id of contact:" << std::endl;
        std::cin >> msg;
        // Search Function
        std::cout << "Contact Details " << std::endl;
	    std::cout << "Name: " << std::endl;
	    std::cout << "Age:  " << std::endl;
	    std::cout << "Phone number:  " << std::endl;    
    }
    else
        std::cout << "Sorry we didn't recognize your request!" << std::endl;
    return (0);
}