#include "phonebook.hpp"

int main()
{
    char msg[512];
    Contact contact;

    // contact.name = "Chama";
    // contact.age = 21;
    //  std::cout << contact.name << std::endl;
    //  std::cout << contact.age << std::endl;

    std::cout << "Please enter your request ADD, SEARCH or EXIT:" << std::endl;
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
    }
    else if (!strcmp(msg, "SEARCH"))
    {
        std::cout << "Please enter id of contact:" << std::endl;
        std::cin >> msg;
        
    }
    else
        std::cout << "Sorry we didn't recognize your request!" << std::endl;
    return (0);
}