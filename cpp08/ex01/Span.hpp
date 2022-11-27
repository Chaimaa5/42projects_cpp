#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
class Span{
	private:
		unsigned int N;
		std::vector<int> vec;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(Span const &);
		Span &operator=(Span const &);
		void addNumber(int N);
		int shortestSpan();
		int longestSpan();
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
void printVector(std::vector<int> v);