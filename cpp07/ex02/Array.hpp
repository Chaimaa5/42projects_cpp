#pragma once
#include <iostream>

#define MAX_VAL 750

template<typename T> class Array{
    private:
        T*  arr;
        int arr_size;
    public:
        Array();
        Array(unsigned int size);
        Array(T arr[], int size);
        ~Array();
        Array(Array<T> const &);
        Array& operator=(Array<T> const &);
        int size() const;
        void setArr(T r);
        T const & getArr();
        T& operator[](int) const;
};

class IndexOutOfBound: public std::exception{
    public:
        const char * what() const throw();
};

template <typename T> Array<T>::Array(){
    std::cout << "Array Constructed\n";
    arr = new T[0];
    arr_size = 0;
}

template <typename T> Array<T>::~Array(){
    delete[] arr;
    std::cout << "Array Destructed\n";
}

template <typename T> Array<T>::Array(Array const & A){
    std::cout << "Array Copied\n";
    *this = A;
}

template <typename T> Array<T> & Array<T>::operator=(Array const & A){
    std::cout << "Array Copied\n";
    this->arr_size = A.arr_size;
    this->arr = new T[A.arr_size];
    for (int i = 0; i < A.arr_size; i++)
        arr[i] = A.arr[i];
    return (*this);
}

template <typename T> Array<T>::Array(unsigned int n){
    arr_size = n;
    arr = new T[n];
}

template <typename T> Array<T>::Array(T tab[], int n){
    arr_size = n;
    arr = new T[n];
    for (int i = 0; i < n; i++)
        arr[i] = tab[i];
}

template <typename T> int Array<T>::size() const
{
    return (arr_size);
}

template <typename T> T& Array<T>::operator[](int n) const{

    if (n < 0 || n > arr_size)
        throw (IndexOutOfBound());
    return (arr[n]);
}

template <typename T> void Array<T>::setArr(T r){
    for (int i = 0; i < arr_size; i++)
        arr[i] = r;    
}

template <typename T> T const & Array<T>::getArr(){
    return (arr);
}