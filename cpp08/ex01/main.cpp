#include "Span.hpp"

int main()
{
	// try{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	// }
	// catch(const char *e){
	// 	std::cerr << e << std::endl;
	// }

	std::vector<int> v;

	for (int i = 0; i < 5; i++)
		v.push_back(i);
	printVector(v);
	
	
	return 0;
}