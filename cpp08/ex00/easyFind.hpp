/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:27:18 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/27 15:27:18 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <list>

template <typename T> void easyFind(T container, int occurence){

	if (std::find(container.begin(), container.end(), occurence) != container.end())
		std::cout << "Occurence Found\n";
	else
		std::cout << "Occurence Not Found\n";
}

