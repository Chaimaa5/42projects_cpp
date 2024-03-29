/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:26 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 20:41:39 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0){

}

Span::Span(unsigned int N){
	if (N >= 0)
		this->N = N;
	else
		throw ("N should be an unsigned int");
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
		throw("Vector size is 1, span can be found");
	return (0);
}

int Span::longestSpan(){
	if (vec.size() > 1)
	{
		int LongSpan = *std::max_element(vec.begin(), vec.end()) -  *std::min_element(vec.begin(), vec.end());
		return (LongSpan);
	}
	else
		throw("Vector size is 1, span can be found");
	return (0);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){

	if (std::distance(begin, end) + vec.size() <= N)
		vec.insert(vec.end(), begin, end);
	else
		throw("Range bigger than N");
}

void printVector(std::vector<int> v){
	std::cout << "Printing Vector: ";
	for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

std::vector<int> Span::getVector(){
	return (vec);
}
