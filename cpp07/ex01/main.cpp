/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:45 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/22 16:58:09 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char c[6] = {'a', 'v', 't', 'k', 'b', 'f'};
    ::iter(c, 'a', ::Lower);
    int i[6] = {1, 2, 6, 8, 9, 0};
    ::iter(i, 6, ::Lower);
    float f[6] = {1.5, 2.6, 6.6, 8, 9, 0};
    ::iter(f, 6.0f, ::Lower);
    double d[6] = {1.5, 2.6, 6.6, 8, 9, 0};
    std::cout <<"before\n";
    ::iter(d, 4.0, ::Print);
    ::iter(d, 2.4, ::Lower);
    std::cout <<"After\n";
    ::iter(d, 4.0, ::Print);
    std::cout <<  "i = " << i[4] << std::endl;
    std::cout <<  "f = " << f[1] << std::endl;
    std::cout <<  "d = " << d[3] << std::endl;
    std::cout <<  "c = " << c[1] << std::endl;
    return (0);
}

