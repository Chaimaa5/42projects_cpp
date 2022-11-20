#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::cout.precision(1);
		std::cout << std::fixed;
        std::string ar = av[1];
        ConvertToChar(ar);
        ConvertToInt(ar);
        ConvertToFloat(ar);
        ConvertToDouble(ar);
    }
}