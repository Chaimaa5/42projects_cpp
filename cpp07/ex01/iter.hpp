/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:43 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/28 11:20:53 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename F> void Change(F const &c)
{
    if (c < 32)
        std::cout << static_cast<F>(c + 32) << std::endl;
    else
        std::cout << static_cast<F>(c - 32)<< std::endl;
} 

template <typename R> void Print(R const &c)
{
    std::cout << c << std::endl;
}

template <typename T> void iter(T *addr, int len, void(*F)(T  const &c))
{
    if (addr)
    {
        for(int i = 0; i < len; i++)
            F(addr[i]);
    }
}
#endif