/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:17 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/16 16:36:20 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ar, char **av)
{
	if (ar == 2){
		std::string input = av[1];
		RPN R;
		int result = R.RPN_Parser(input);
		if (result != -1)
			std::cout << result << std::endl;
	}
	else
		std::cout << "Only 2 arguments allowed\n";
}