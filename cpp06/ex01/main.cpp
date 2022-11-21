#include "Serialization.hpp"

int main()
{
    Data* ptr = new Data;
    ptr->raw = "Trying to serialize";
    Data* serialized = ptr;
    
    std::cout << "Before Serializaton" << std::endl;
    std::cout << serialized->raw << std::endl;
    std::cout << ptr->raw << std::endl;

    std::cout << "After Serializaton" << std::endl;
    uintptr_t uptr = serialize(ptr);
    std::cout << "Serialization of Data ptr: "<< ptr << std::endl;
    serialized = ptr;
    std::cout << serialized->raw << std::endl;
    std::cout << ptr->raw << std::endl;
    ptr = deserialize(uptr);
    std::cout << ptr->raw << std::endl;
    std::cout << "Deserialization of uintptr_t uptr: " << uptr << std::endl;
}