#include <iostream>
#include <string>

using namespace std;

//Operator new overload
void * operator new (size_t s) _THROW_BAD_ALLOC { 
    std::cout <<"Allocated " << s << " bytes\n";
    return malloc(s); }

int main() {
    string smallString = "012345678";
    cout << smallString << endl;
    string bigString = "012345678945436576756435448687";
    cout << bigString << endl;
}