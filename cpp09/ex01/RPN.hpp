/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:23 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 20:28:23 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
class RPN{
	private:
		std::stack<int> stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN &);
		RPN &operator=(const RPN &);

		int RPN_Parser(std::string input);
		int RPN_Calculator(int x, int y, char op);
};