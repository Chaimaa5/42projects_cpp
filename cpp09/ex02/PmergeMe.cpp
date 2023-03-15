/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:27:55 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 21:06:42 by cel-mhan         ###   ########.fr       */
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
std::list<int> PmergeList(std::list<int> list){
	std::list<int> right;
	std::list<int> left;
	if (list.size() < 10)
		list.sort();
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
		PmergeList(right);
		PmergeList(left);
	}
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
		for (std::list<int>::iterator i = right.begin(); i != right.end(); i++)
			std::cout << *i << std::endl;
		std::cout << "---------------------------------\n" ;
	}
	list.splice(list.end(),  right);
	list.splice(list.end(), left);
	return list;
	
}
void PmergeDeque(std::deque<int> deque){
	for (std::deque<int>::iterator i = deque.begin(); i != deque.end(); i++)
		std::cout << *i << std::endl;
}