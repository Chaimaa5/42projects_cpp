#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try{
        Bureaucrat B("B", 109);
        // Bureaucrat B("B", 10);
        Form F("Firma", 100, 50);
        std::cout << B << std::endl;
        std::cout << F << std::endl;
        B.signForm(F);
        F.beSigned(B);
        std::cout << F << std::endl;
        // B.decrement();
        // B.decrement();
        // B.decrement();
        // B.increment();
        // std::cout << B << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}