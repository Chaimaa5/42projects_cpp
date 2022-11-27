#include "Span.hpp"

Span::Span(): N(0){

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
	if (vec.size() <= this->N)
		vec.push_back(N);
	else
		throw("Vector is full");
}

int Span::shortestSpan(){
	std::vector<int> container = vec;
	std::sort(container.begin(), container.end(), std::greater <int>());
	int ShortSpan = container[0] - container[1];
	if (container.size() > 1)
	{
		for (size_t i = 0; i < container.size() - 1; i++)
		{
			if (ShortSpan > container[i] - container[i + 1])
				ShortSpan = container[i] - container[i + 1];
		}
		return (ShortSpan);
	}
	else
		throw("No longest Span");
	return (0);
}

int Span::longestSpan(){
	std::vector<int> sorted = vec;
	std::sort(sorted.begin(), sorted.end());
	if (sorted.size() > 1)
	{
		int LongSpan = sorted[sorted.size() - 1] -  sorted[0];
		return (LongSpan);
	}
	else
		throw("No longest Span");
	return (0);
		
}


void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	std::vector<int> add(begin, end);

	if (add.size() + vec.size() < N){
		vec.insert(vec.end(), add.begin(), add.end());
	}
	else
		throw("Range bigger than N");
}

void printVector(std::vector<int> v){
	std::cout << "Printing Vector: ";
	for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++)
		std::cout << *i << ", ";
	std::cout << std::endl;
}

std::vector<int> Span::getVector(){
	return (vec);
}