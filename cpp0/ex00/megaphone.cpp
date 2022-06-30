#include <iostream>

char    upper(char c)
{
    if (c >= 97 && c <= 127)
        return (c - 32);
    else
        return (c);
}
int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
        std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * \n" ;
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << upper(argv[i][j]) ;
                j++;
            }
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}