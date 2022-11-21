/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:24:10 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/17 19:53:13 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat B("birbir", 5);
        B.decrement();
        std::cout << B << std::endl;
        B.increment();
        B.decrement();
        std::cout << B << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}