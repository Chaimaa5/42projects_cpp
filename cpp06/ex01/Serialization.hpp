#pragma once
#include <iostream>

struct Data{
    int     x;
    int     y;
    char    c;
    double  d;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);