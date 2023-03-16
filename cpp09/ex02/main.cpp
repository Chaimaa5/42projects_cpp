/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:26 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/16 16:41:59 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ar, char **av)
{
	if (ar == 1)
		std::cout << "the program requires more arguments.\n";
	else{
		PmergeMe P;
		P.Parser(ar, av);
		std::list<int> list = P.GetList();
		std::deque<int> deque = P.GetDeque();
		
		//BEFORE
		std::cout << "Before: ";
		for (std::list<int>::iterator i = list.begin(); i != list.end(); i++)
			std::cout << *i << " ";
		std::cout << std::endl;
		
		//LIST
		std::clock_t ListStart = std::clock();
		PmergeList(list);
		std::clock_t ListEnd = std::clock();
		double ListDuration = (ListEnd - ListStart) / (double) CLOCKS_PER_USEC;
		
		//DEQUE
		std::clock_t DequeStart = std::clock();
		PmergeDeque(deque);
		std::clock_t DequeEnd = std::clock();
		double DequeDuration = (DequeEnd - DequeStart) / (double) CLOCKS_PER_USEC;
		
		std::cout << "After: ";
		for (std::list<int>::iterator i = list.begin(); i != list.end(); i++)
			std::cout << *i << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << ar - 1 <<  " elements with std::list : " << ListDuration << " us\n";
		std::cout << "Time to process a range of " << ar - 1 <<  " elements with std::deque : " << DequeDuration << " us\n";
	}
}