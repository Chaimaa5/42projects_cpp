#pragma once
#include <iostream>
#include <vector>
#include <iterator>

template <typename T> void easyFind(T container, int occurence){

	if (std::find(container.begin(), container.end(), occurence) != container.end())
		std::cout << "Occurence "<< occurence <<" Found\n";
	else
		std::cout << "Nothing Found\n";

}