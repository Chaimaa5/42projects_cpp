/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:33 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 20:37:43 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
#include <list>
#include <deque>

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

std::list<int>  PmergeList(std::list<int>);
void PmergeDeque();