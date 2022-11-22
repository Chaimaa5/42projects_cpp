#include "Array.hpp"


const char * IndexOutOfBound::what() const throw(){
    return ("Index out of bound.");
}

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