/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:53:59 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/09/23 15:53:59 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    std::string s;

    i = 1;
    j = 0;
    if (argc == 1)
        std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * \n" ;
    else
    {
        while (i < argc)
        {
            s = argv[i];
            j = 0;
            while (s[j])
            {
                std::cout << (char)std::toupper(s[j]);
                j++;
            }
            std::cout << "\n";
            i++;
        }
    }
    return (0);
}