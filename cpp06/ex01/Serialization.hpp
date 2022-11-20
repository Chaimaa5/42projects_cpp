#pragma once
#include <iostream>

struct Data{
    std::string raw;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);