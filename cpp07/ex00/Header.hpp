/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:36 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/11 23:24:36 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
template <typename T> void swap(T &x, T &y)
{
    T z;

    z = x;
    x = y;
    y = z;
}

template <typename T> T max(T x, T y)
{
    return ((x > y) ? x : y);
}

template <typename T> T min(T x, T y)
{
    return ((x < y) ? x : y);
}
#endif