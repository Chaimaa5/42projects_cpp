/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:20:17 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/28 11:30:10 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"





int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    std::cout << numbers.size() << std::endl;

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "-2 " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr <<  e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}



// int main()
// {
//     Array<std::string> tab(MAX_VAL);

//     std::cout << tab.size() << std::endl;

//     tab.setArr("This is my Array Template");
//     try
//     {
//         tab[-2] = "Not Working";
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "-2 " << e.what() << '\n';
//     }
//     try
//     {
//         tab[MAX_VAL] = "Not working";
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr <<  e.what() << '\n';
//     }
//     return 0;
// }