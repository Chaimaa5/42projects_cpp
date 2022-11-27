/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:21 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 15:27:21 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

int main()
{
	std::vector<int> vec;

	for (int i = 0; i < 50; i++)
		vec.push_back(i);
    easyFind(vec, 3);
	easyFind(vec, 1000);
    easyFind(vec, 45);

	std::vector<char> character;

	for (int i = 32; i < 127; i++)
		vec.push_back(static_cast<char>(i));
	easyFind(vec, 'A');
	easyFind(vec, '-');
    easyFind(vec, 'C');

	std::list<int> list;
	for (int i = 50; i < 100; i++)
		list.push_back(i);
	std::cout << list.size() << std::endl;
	for (int i = 200; i < 230; i += 10)
		list.push_front(i);
	std::cout << list.size() << std::endl;
	easyFind(list, 99);
	list.pop_back();
	std::cout << list.size() << std::endl;
	easyFind(list, 99);
	easyFind(list, 232);
	easyFind(list, 57);
    easyFind(list, 210);
	easyFind(list, 230);
}
