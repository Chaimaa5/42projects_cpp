/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:24 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 20:45:52 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		Span sp = Span(110000);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span: "<< sp.shortestSpan() << std::endl;
		std::cout <<  "Longest Span: "<< sp.longestSpan() << std::endl;
		std::vector<int> v;
		printVector(sp.getVector());
		std::cout <<"Shortest Span: "<<sp.shortestSpan() << std::endl;
		std::cout <<  "Longest Span: "<<sp.longestSpan() << std::endl;
		for (int i = 100000; i < 200000; i ++)
			v.push_back(i);
		sp.addRange(v.begin(), v.end());
		// printVector(sp.getVector());
		std::cout <<"Shortest Span: "<<sp.shortestSpan() << std::endl;
		std::cout <<  "Longest Span: "<<sp.longestSpan() << std::endl;
		std::cout << "Final size of the Span is: "<< sp.getVector().size() << std::endl; 
	}
	catch(const char *e){
		std::cerr << e << std::endl;
	}
	return 0;
}