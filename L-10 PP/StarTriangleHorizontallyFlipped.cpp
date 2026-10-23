#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;
    // Method 1
    for (int i = 1; i <= n; i++)
    {
         for (int j = 1; j <= n + 1 - i; j++)
         {
             std::cout << "* " << " ";
         }/     std::cout << std::endl;
    }

    // Method 2
    //     for (int i = n; i >= 1; i--)
    //    {
    //          for (int j = 1; j <= i; j++)
    //          {
    //              std::cout << "* " << " ";
    //          }
    //          std::cout << std::endl;
    //      }
    //  }

    // Method 3
//     int a = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             std::cout << "* ";
//         }
//         a--;
//         std::cout << std::endl;
//     }
// }