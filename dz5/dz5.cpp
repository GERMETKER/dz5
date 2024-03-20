#include <Windows.h>
#include <iostream>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 9; i > -1; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i <= 8 && i >= 1)
            {
                if (j == 1)
                {
                    std::cout << "a";
                }
                else if (j == 2)
                {
                    std::cout << "b";
                }
                else if (j == 3)
                {
                    std::cout << "c";
                }
                else if (j == 4)
                {
                    std::cout << "d";
                }
                else if (j == 5)
                {
                    std::cout << "e";
                }
                else if (j == 6)
                {
                    std::cout << "f";
                }
                else if (j == 7)
                {
                    std::cout << "g";
                }
                else if (j == 8)
                {
                    std::cout << "h";
                }
                std::cout << i << " ";
            }
            if (i == 9 || i == 0)
            {
                if (j == 0 || j == 9)
                {
                    std::cout << "  ";
                }
                else
                {
                    if (j == 1)
                    {
                        std::cout << "a  ";
                    }
                    else if (j == 2)
                    {
                        std::cout << "b  ";
                    }
                    else if (j == 3)
                    {
                        std::cout << "c  ";
                    }
                    else if (j == 4)
                    {
                        std::cout << "d  ";
                    }
                    else if (j == 5)
                    {
                        std::cout << "e  ";
                    }
                    else if (j == 6)
                    {
                        std::cout << "f  ";
                    }
                    else if (j == 7)
                    {
                        std::cout << "g  ";
                    }
                    else if (j == 8)
                    {
                        std::cout << "h  ";
                    }
                }
            }
        }  
        std::cout << "\n";
    }
    return 0;
}
