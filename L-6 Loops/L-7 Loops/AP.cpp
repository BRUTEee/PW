#include <iostream>

int main()
{
    std::cout << "Enter the number of terms: ";
    int n;
    std::cin >> n;

    // AP = Arithmetic Progression
    // AP consists of a, d, an
    // a = initial value
    // d = difference
    // an = airthmetic progression
    // an = a+(n-1)*d
    /* lets take a = 2, d = 3 then
    an = 2+(n-1)*3 => 2+3n-1 => 3n-1 */

    // 2, 5, 8, 11, 13, 17..

    /*
    for (int i = 2; i <= 3 * n - 1; i+=3)
    {
        std::cout << i << " ";
    }
    */

    /*
    for (int i = 1; i <=n; i++)
    {
        std::cout << 3*i-1 << " ";
    }
    */
    /*
        int a = 2;
        for (int i = 1; i <= n; i++)
        {
            std::cout << a << " ";
            a += 3; // Generic
        }
    */
    int a = 3, d = 4;
    for (int i = 1; i <= n; i++)
    {
        std::cout << a << " ";
        a += d;
    }
    return 0;
}