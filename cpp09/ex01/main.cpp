#include "RPN.hpp"

int main(int ar, char **av)
{
	if (ar == 2){
		std::string input = av[1];
		RPN R;
		R.RPN_Parser(input);
	}
}