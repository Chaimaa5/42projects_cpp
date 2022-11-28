/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:39 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 20:50:22 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(18);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.printStack();

	MutantStack<int>::reverse_iterator rev = mstack.rbegin();
	MutantStack<int>::reverse_iterator reve = mstack.rend();

	++rev;
	--reve;

	while (rev != reve)
	{
		std::cout << *rev << std::endl;
		++rev;
	}

	MutantStack<int> test(mstack);
	test.push(900);
	test.push(233);
	std::cout << test.top() << std::endl;
	std::cout << test.size() << std::endl;
	test.push(334);
	test.push(4);
	test.push(800);
	test.pop();
	test.push(765);
	test.push(435);

	MutantStack<int>::iterator it = test.begin();
	MutantStack<int>::iterator rit = test.end();

	++it;
	--it;
	while (it != rit)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	test.printStack();
	return 0;
}

