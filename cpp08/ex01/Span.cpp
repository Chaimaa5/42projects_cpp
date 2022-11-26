#include "Span.hpp"

Span::Span(){

}
Span::Span(unsigned int N){
	this->N = N;
}
Span::~Span(){

}
Span::Span(Span const & S){
	*this = S;
}
Span &Span::operator=(Span const &S){
	this->N = S.N;
	return (*this);
}
void Span::addNumber(int N){
	if (vec.size() < this->N)
		vec.push_back(N);
	else
		throw("Vector is full");
}

int Span::shortestSpan(){
	std::vector<int> container = vec;
	std::sort(container.begin(), container.end(), std::greater <int>());
	int ShortSpan = container[0] - container[1];

	for (size_t i = 0; i < container.size() - 1; i++)
	{
		std::cout << container[i + 1] << "---" << container[i]<< std::endl;
		if (ShortSpan > container[i] - container[i + 1])
			ShortSpan = container[i] - container[i + 1];
		std::cout << ShortSpan << std::endl;
	}
	return (ShortSpan);
}

int Span::longestSpan(){
	std::vector<int> sorted = vec;
	std::sort(sorted.begin(), sorted.end());
	int LongSpan = sorted[sorted.size() - 1] -  sorted[0];
	return (LongSpan);
}