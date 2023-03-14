#include "RPN.hpp"
RPN::RPN(){}
RPN::~RPN(){}
RPN::RPN(const RPN & R){*this = R;}
RPN & RPN::operator=(const RPN & R){
	this->stack = R.stack;
	return (*this);
}
void RPN::RPN_Parser(std::string input){
	size_t found = input.find_first_not_of(" 0123456789+-/*");
	if (found != std::string::npos)
		std::cout << "Error\n" ;
	else{
		for (size_t i = 0; i < input.length(); i++)
		{
			if (input[i] != '*'  && input[i] != '+' && input[i]  != '/' && input[i]  != '-'&& input[i]  != ' ')
				size_t sep = input.find(input[i]);
				std::string c = input.substr(0, sep);
				stack.push(atoi(c));
		}
		
	}
	// for (size_t i = 0; i < stack.size(); i++)
	// {
		int a = stack.top();
	std::cout << a << std::endl;
	// }
	
}