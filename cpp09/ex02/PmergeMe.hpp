/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:33 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/16 12:52:42 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
#include <list>
#include <deque>
#include <algorithm>

#define CLOCKS_PER_USEC (CLOCKS_PER_SEC / 1000000)
class PmergeMe{
	private:
		std::list<int>	list;
		std::deque<int>	deque;
	public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe &);
	PmergeMe & operator=(const PmergeMe &);
	void Parser(int ar, char **av);
	std::list<int>	GetList();
	std::deque<int>	GetDeque();
};

void  PmergeList(std::list<int> &);
void PmergeDeque(std::deque<int> &);