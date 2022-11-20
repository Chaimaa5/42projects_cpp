#include "Convert.hpp"

void    ConvertToChar(std::string ar){
    std::cout << "Char: ";
    if (ar.length() == 1 && !std::isdigit(ar[0]))
    {
        std::cout << ar[0] << std::endl;
        return;
    }
    try{
        int c = std::stoi(ar);
        if (c < 0 || c > 255)
            throw std::exception();
        if (!std::isprint(c))
            std::cout << "Non displayable\n";
        else
            std::cout << static_cast<char>(c) << std::endl;
    }
    catch(const std::exception &e){
        std::cout << "Impossible" << std::endl;
    }
}

void ConvertToInt(std::string ar){
    std::cout << "Int: ";
    try{
        int n = stoi(ar);
        std::cout << (n) << std::endl;
    }
    catch(const std::exception & e){
        std::cout << "Impossible" << std::endl;
    }
}

void   ConvertToFloat(std::string ar){
    std::cout << "Float: ";
    try{
        float f = stof(ar);
        std::cout << f << "f" << std::endl;
    }
    catch(const std::exception & e){
        std::cout << "Impossible" << std::endl;
    }
}

void   ConvertToDouble(std::string ar){
    std::cout << "Double: ";
    try{
        double f = stod(ar);
        std::cout << f << std::endl;
    }
    catch(const std::exception & e){
        std::cout << "Impossible" << std::endl;
    }
}