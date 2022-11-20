#include "Convert.hpp"

void    ConvertToChar(std::string ar){
    std::cout << "char: ";
    try{
        if (ar.length() == 1)
        {
            char c = ar[0];
            std::cout << c << std::endl;
            throw ();
        }
    }
    catch(const std::exception & e){
        std::cout << "Impossible" << std::endl;
    }
}

void ConvertToInt(std::string ar){
    std::cout << "int: ";
    try{
        int n = stoi(ar);
        std::cout << n << std::endl;
        throw ();
    }
    catch(const std::exception & e){
        std::cout << "Impossible" << std::endl;
    }
}

void   ConvertToFloat(std::string ar){
    std::cout << "float: ";
    try{
        float f = stof(ar);
        std::cout << static_cast<float>(f) << "f" << std::endl;
        throw ();
    }
    catch(const std::exception & e){
        std::cout << "Impossible" << std::endl;
    }
}