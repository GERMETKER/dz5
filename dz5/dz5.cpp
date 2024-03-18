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
            if (j == 0 || j == 10)
            {
                std::cout << "   ";
            }
            else if (i <= 8 && i >= 1)
            {
                std::cout << i << " ";
            }
            else if (i == 9 || i == 0)
            {
                std::cout << "no";
            }
            if (j >= 0 && j <= 10)
            {

            }
            else
            {
                std::cout << i << " ";
            }
        }
        
        std::cout << "\n";
    }
    
    return 0;
}
