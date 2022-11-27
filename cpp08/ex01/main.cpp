/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:24 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 15:27:24 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		Span sp = Span(10);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span: "<< sp.shortestSpan() << std::endl;
		std::cout <<  "Longest Span: "<< sp.longestSpan() << std::endl;
		std::vector<int> v;
		for (int i = 100; i < 400; i +=100)
			v.push_back(i);
		printVector(v);
		sp.addRange(v.begin(), v.end());
		printVector(sp.getVector());
		std::cout <<"Shortest Span: "<<sp.shortestSpan() << std::endl;
		std::cout <<  "Longest Span: "<<sp.longestSpan() << std::endl;
	}
	catch(const char *e){
		std::cerr << e << std::endl;
	}
	return 0;
}