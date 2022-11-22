#include <iostream>
struct structc_t
{
   int         s;
   int          i;
   char        c;
   bool      d;
} ;

int main()
{
    structc_t s;
    s.s = 5; s.i = 10; s.c = 'A'; s.d = true;
    uintptr_t p = reinterpret_cast<uintptr_t>(&s);


//    printf("sizeof(structa_t) = %lu\n", sizeof(s));
    // printf("sizeof(structa_t) = %lu\n", sizeof(p));
    
    int* i = reinterpret_cast<int*>(p);
    std::cout << *i << std::endl;
    std::cout << *(++i) << std::endl;
    i++;
    char *c = reinterpret_cast<char*>(i);
    std::cout << *(c) << std::endl;
    c++;
    bool *b = reinterpret_cast<bool*>(c);
    std::cout << *(b++) << std::endl;
}