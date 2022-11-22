#pragma once
#include <iostream>

#define MAX_VAL 750

template<typename T> class Array{
    private:
        T*  arr;
        int arr_size;
    public:
        Array();
        Array(int size);
        Array(T arr[], int size);
        ~Array();
        Array(Array<T> const &);
        Array& operator=(Array<T> const &);
        int size();
        int& operator[](int);
};