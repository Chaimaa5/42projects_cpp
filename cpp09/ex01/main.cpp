#include "RPN.hpp"

int main(int ar, char **av)
{
	if (ar == 2){
		std::string input = av[1];
		RPN R;
		int result = R.RPN_Parser(input);
		if (result != -1)
			std::cout << result << std::endl;
	}
}