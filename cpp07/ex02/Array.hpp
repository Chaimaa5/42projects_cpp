/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:20:20 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/28 11:30:45 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define MAX_VAL 750

template<typename T> class Array{
    private:
        T*  arr;
        int arr_size;
    public:
        Array(){
            std::cout << "Array Constructed\n";
            arr = new T[0];
            arr_size = 0;
        }
        Array(unsigned int n){
            arr_size = n;
            arr = new T[n];
        }
        Array(T tab[], int n){
            arr_size = n;
            arr = new T[n];
            for (int i = 0; i < n; i++)
                arr[i] = tab[i];
        }
        ~Array(){
            delete[] arr;
            std::cout << "Array Destructed\n";
        }
        Array(Array<T> const &A){
            std::cout << "Array Copied\n";
            *this = A;
        };
        Array& operator=(Array<T> const &A){
            std::cout << "Array Copied\n";
            this->arr_size = A.arr_size;
            this->arr = new T[A.arr_size];
            for (int i = 0; i < A.arr_size; i++)
                arr[i] = A.arr[i];
            return (*this);
        }
        class IndexOutOfBound: public std::exception{
            public:
                const char * what() const throw(){
                    return ("Index out of bound.");
                }
        };
        int size() const{
            return (arr_size);
        }
        void setArr(T r){
            for (int i = 0; i < arr_size; i++)
                arr[i] = r; 
        }
        T const & getArr(){
            return (arr);
        }
        T& operator[](int n) const{
            if (n < 0 || n > arr_size)
                throw (IndexOutOfBound());
            return (arr[n]);        
        }
};
