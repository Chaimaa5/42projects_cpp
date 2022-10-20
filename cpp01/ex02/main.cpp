#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;
    
    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::cout << "Printing memory addresses\n" << std::endl;
    std::cout << "str: " << &str << std::endl;
    std::cout << "stringPTR: " << &stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl << std::endl ;
    std::cout << "Printing values\n" << std::endl;
    std::cout << "str: " << str << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout <<"stringREF: " << stringREF << std::endl;
}