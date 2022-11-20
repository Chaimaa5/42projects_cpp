#include "Serialization.hpp"

int main()
{
    Data* ptr = new Data;
    ptr->raw = "Trying to serialize";
    uintptr_t uptr = serialize(ptr);
    std::cout << serialize(ptr) << std::endl;
    std::cout << deserialize(uptr) << std::endl;
}