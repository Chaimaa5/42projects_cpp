/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:43 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/22 16:54:36 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename F> void Lower(F c)
{
    if (c < 32)
        c = c + 32;
    else
        c = c - 32;
} 

template <typename R> void Print(R &c)
{
    std::cout << c << std::endl;
} 

template <typename T> void iter(T *addr, T len, void(*F)(T  &c))
{
    for(int i = 0; i < len; i++)
        F(addr[i]);
}
#endif