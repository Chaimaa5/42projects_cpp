/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:27:55 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/16 15:13:05 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe & P){
	*this = P;
}

PmergeMe & PmergeMe::operator=(const PmergeMe & P){
	this->list = P.list;
	this->deque = P.deque;
	return (*this);
}

bool is_digit(std::string n)
{
	for (size_t i = 0; i < n.length(); i++)
	{
		if (!isdigit(n[i]))
			return (0);
	}
	return (1);
}

void PmergeMe::Parser(int ar, char **av){
	for (int i = 1; i < ar; i++)
	{
		std::string n = av[i];
		if (is_digit(n))
		{
			list.push_back(atoi(n.c_str()));
			deque.push_back(atoi(n.c_str()));
		}
		else
		{
			std::cout << "Error.\n";
			break;
		}
	}
	
}

std::list<int>	 PmergeMe::GetList(){return list;}
std::deque<int>	 PmergeMe::GetDeque(){return deque;}
void PmergeList(std::list<int> & list){
	std::list<int> right;
	std::list<int> left;
	if (list.size() < 10)
	{
		list.sort();
		return ;
	}
	else{
		size_t i = 0;
		for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		{
			if (i < (list.size() / 2))
				right.push_back(*it);
			else
				left.push_back(*it);
			i++;
		}
	}
	PmergeList(right);
	PmergeList(left);
	list.clear();
	while(!right.empty() && !left.empty())
	{
		if (right.front() <= left.front())
		{
			list.push_back(right.front());
			right.pop_front();
		}
		else{
			list.push_back(left.front());
			left.pop_front();
		}
	}
}
void PmergeDeque(std::deque<int>& deque){
		std::deque<int> right;
	std::deque<int> left;
	if (deque.size() < 10)
	{
		sort(deque.begin(), deque.end());
		return ;
	}
	else{
		size_t i = 0;
		for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
		{
			if (i < (deque.size() / 2))
				right.push_back(*it);
			else
				left.push_back(*it);
			i++;
		}
	}
	PmergeDeque(right);
	PmergeDeque(left);
	deque.clear();
	while(!right.empty() && !left.empty())
	{
		if (right.front() <= left.front())
		{
			deque.push_back(right.front());
			right.pop_front();
		}
		else{
			deque.push_back(left.front());
			left.pop_front();
		}
	}
}