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

class IndexOutOfBound: public std::exception{
    public:
        const char * what() const throw();
};

template <typename T> Array<T>::Array(){
    std::cout << "Array Constructed\n";
}

template <typename T> Array<T>::~Array(){
    std::cout << "Array Destructed\n";
}

template <typename T> Array<T>::Array(Array const & A){
    std::cout << "Array Copied\n";
    *this = A;
}

template <typename T> Array<T> & Array<T>::operator=(Array const & A){
    std::cout << "Array Copied\n";
    this->arr_size = A.arr_size;
    this->arr = A.arr;
    return (*this);
}

template <typename T> Array<T>::Array(int n){
    arr_size = n;
    arr = new T[n];
}

template <typename T> Array<T>::Array(T tab[], int n){
    arr_size = n;
    arr = new T[n];
    for (int i = 0; i < n; i++)
        arr[i] = tab[i];
}

template <typename T> int Array<T>::size()
{
    return (arr_size);
}

template <typename T> int& Array<T>::operator[](int n){

    if (n < 0 || n > arr_size)
        throw (IndexOutOfBound());
    return (arr[n]);
}