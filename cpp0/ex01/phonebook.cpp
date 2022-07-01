#include "phonebook.hpp"

void    make_a_choice(void) 
{
    std::cout << "Please enter your request ADD, SEARCH or EXIT:" << std::endl;
    std::cout << "1) ADD" << std::endl;
    std::cout << "2) SEARCH" << std::endl;
    std::cout << "3) EXIT" << std::endl;
}

void    program_exit(void)
{
    std::cout << "See you next time" << std::endl;
    return ;
}

void    add_contact(Contact contact)
{
        std::cout << "Please enter contact's name:" << std::endl;
        std::cin >> contact.name;
        std::cout << "Please enter contact's age:" << std::endl;
        std::cin >> contact.age;
        std::cout << "Please enter contact's phone number:" << std::endl;
        std::cin >> contact.phone;
        std::cout << "Contact added successfuly!" << std::endl;
}

void    search_contact(char *msg)
{
    std::cout << "Please enter id of contact:" << std::endl;
    std::cin >> msg;
    // Search Function
    std::cout << "Contact Details " << std::endl;
	std::cout << "Name: " << std::endl;
	std::cout << "Age:  " << std::endl;
	std::cout << "Phone number:  " << std::endl;  
}

int main()
{
    char msg[512];
    Contact contact;

    make_a_choice();
    std::cin >> msg;
    if (!strcmp(msg, "EXIT") || !strcmp(msg, "3"))
        program_exit();
    else if (!strcmp(msg, "ADD") || !strcmp(msg, "1"))
        add_contact(contact);
    else if (!strcmp(msg, "SEARCH") || !strcmp(msg, "2"))
        search_contact(msg);
    else
        std::cout << "Sorry we didn't recognize your request!" << std::endl;
    return (0);
}