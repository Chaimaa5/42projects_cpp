#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t uptr = reinterpret_cast<uintptr_t>(&ptr);
    return (uptr);
}

Data* deserialize(uintptr_t raw)
{
    Data* ptr = reinterpret_cast<Data *>(&raw);
    return (ptr);
}