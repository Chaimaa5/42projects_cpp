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

		void RPN_Parser(std::string input);
		void RPN_Calculator();
};