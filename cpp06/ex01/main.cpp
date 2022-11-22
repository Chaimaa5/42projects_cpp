#include "Serialization.hpp"

int main()
{
    Data* ptr = new Data;
    ptr->x = 10;
    ptr->y = 5;
    ptr->c = 'A';
    ptr->d = true;
    
    // std::cout << "----Before Serializaton----" << std::endl;
    // std::cout << ptr->y << std::endl;
    // std::cout << ptr->x << std::endl;
    // std::cout << ptr->c<< std::endl;
    // std::cout << ptr->d << std::endl;

    std::cout << "----After Serializaton----" << std::endl;
    uintptr_t uptr = serialize(ptr);
    std::cout << "Serialization of Data ptr: "<< ptr;
    std::cout << " to uintptr_t uptr: " << uptr << std::endl;

    // int *i = reinterpret_cast<in t*>(uptr);
    // std::cout << *(i) << std::endl;
    // std::cout << *(++i) << std::endl;
    // std::cout << *(reinterpret_cast<char*>(++i)) << std::endl;
    // std::cout << *(reinterpret_cast<bool*>(++i)) << std::endl;

    // std::cout << "----After Deserializaton----" << std::endl;
    ptr = deserialize(uptr);
    std::cout << ptr->y << std::endl;
    std::cout << ptr->x << std::endl;
    std::cout << ptr->c<< std::endl;
    std::cout << ptr->d << std::endl;
}

