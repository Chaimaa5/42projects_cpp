#include "Serialization.hpp"

int main()
{
    Data* ptr = new Data;
    ptr->raw = "Trying to serialize";
    uintptr_t uptr = serialize(ptr);
    std::cout << "Serialization of Data ptr: "<< serialize(ptr) << std::endl;
    std::cout << "Deserialization of uintptr_t uptr: " <<deserialize(uptr) << std::endl;
}