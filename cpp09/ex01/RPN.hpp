#include <iostream>
#include <stack>
class RPN{
	private:
		std::stack<int> stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN &);
		RPN &operator=(const RPN &);

		int RPN_Parser(std::string input);
		int RPN_Calculator(int x, int y, char op);
};