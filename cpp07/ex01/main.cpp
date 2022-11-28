/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:45 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/28 11:23:46 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char c[6] = {'a', 'v', 't', 'k', 'B', 'f'};
    iter(c, 5, Change);
    int i[6] = {1, 2, 6, 8, 9, 0};
    iter(i, 6, Change);
    float f[6] = {1.5f, 2.6f, 6.6f, 8.43f, 9.54f, 0.45f};
    iter(f, 6, Change);
    double d[6] = {1.5, 2.6, 6.6, 8, 9, 0};
    std::cout << "Before\n";
    iter(d, 4, Print);
    std::cout << "After\n";
    iter(d, 4, Change);
    return (0);
}
