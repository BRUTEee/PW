#include <iostream>

int main()
{
    for (int i = 1; i<=30; i++)
    {
        // if(i%4 != 0)
        // {
        //     std::cout << i << " ";
        // }

        if(i%4==0) continue;
        {
            std::cout << i << " ";
        }
    }

    return 0;
}