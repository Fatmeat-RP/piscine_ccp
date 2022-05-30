#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    size_t j;
    std::string str;

    if (argc > 1)
    {
        j = 0;
        i = 1;
        while (i < argc)
        {
            if (*argv[j] == '\0')
            {
                i++;
                j++;
            }   
            else
                std::cout << toupper(*argv[j++]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}