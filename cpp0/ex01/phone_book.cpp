#include "phone_book.hpp"

// 
int main()
{
    char msg[512];

    std::cout << "Please enter your request ADD, SEARCH or EXIT:" << std::endl;
    std::cin >> msg;
    if (!strcmp(msg, "EXIT"))
        std::cout << "bye" << std::endl;
    return (0);
}