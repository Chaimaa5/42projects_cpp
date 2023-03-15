/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:26 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 20:54:03 by cel-mhan         ###   ########.fr       */
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
		list = PmergeList(list);
		for (std::list<int>::iterator i = list.begin(); i != list.end(); i++)
			std::cout << *i << std::endl;
		std::cout << "---------------------------------\n" ;
		// P.PmergeDeque();
	}
}