/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:29 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 15:27:32 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		std::vector<int> getVector();
};

void printVector(std::vector<int> v);