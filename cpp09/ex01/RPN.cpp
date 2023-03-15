#include "RPN.hpp"
RPN::RPN(){}
RPN::~RPN(){}
RPN::RPN(const RPN & R){*this = R;}
RPN & RPN::operator=(const RPN & R){
	this->stack = R.stack;
	return (*this);
}
int RPN::RPN_Calculator(int x, int y, char op){
	if (op == '*')
		return (x * y);
	else if (op == '/')
		return (x / y);
	else if (op == '-')
		return (x - y);
	else if (op == '+')
		return (x + y);
	return (0);
}

int RPN::RPN_Parser(std::string input){
	size_t found = input.find_first_not_of(" 0123456789+-/*");
	char op;
	if (found != std::string::npos)
	{
		std::cout << "Error\n" ;
		return -1;
	}
	else{
		for (size_t i = 0; i < input.length(); i++)
		{
			if (input[i] >= '0' && input[i] <= '9')
			{
				int n = input[i] - '0';
				stack.push(n);
			}	
			else if (input[i] == '*'  || input[i] == '+' || input[i]  == '/' || input[i]  == '-')
				op = input[i];
			if (stack.size() >= 2 && op)
			{
				int num2 = stack.top();
				stack.pop();
				int num1 = stack.top();
				stack.pop();
				int res = RPN_Calculator(num1, num2, op);
				stack.push(res);
				op = '\0';	
			}	
		}
	}
	return (stack.top());
}