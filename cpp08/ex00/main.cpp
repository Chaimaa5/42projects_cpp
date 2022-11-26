#include "easyFind.hpp"

int main()
{
	std::vector<int> vec;

	for (int i = 0; i < 100; i++)
		vec.push_back(i);
    easyFind(vec, 3);
	easyFind(vec, 1000);
    easyFind(vec, 87);

	std::vector<char> character;

	for (int i = 32; i < 127; i++)
		vec.push_back(static_cast<char>(i));
	
	easyFind(vec, 'A');
	easyFind(vec, '-');
    easyFind(vec, 'C');

	// std::vector<std::string> str("hello", "people");
	// easyFind(str, "hell");
}
