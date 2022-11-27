/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:45 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 15:47:54 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	//Canonical Form
		MutantStack(){}
		~MutantStack(){}
		MutantStack(MutantStack<T> const &M){
			*this = M;
		}
		MutantStack<T> & operator=(MutantStack<T> const &M){
			this->c = M.c;
			return (*this);
		}
	//Iterators
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin() {
			return (this->c.begin());
		}
		iterator end(){
			return (this->c.end());
		}
		const_iterator cbegin() {
			return (this->c.cbegin());
		}
		const_iterator cend(){
			return (this->c.cend());
		}
		reverse_iterator rbegin(){
			return (this->c.rbegin());
		}
		reverse_iterator rend(){
			return (this->c.rend());
		}
		const_reverse_iterator crbegin(){
			return (this->c.crbegin());
		}
		const_reverse_iterator crend(){
			return (this->c.crend());
		}
	//Print Method
		void printStack(){
			std::cout << "Printing Stack: ";
			for(iterator s = this->begin(); s < this->end(); s++)
				std::cout << *s << " ";
			std::cout << std::endl;
		}
};