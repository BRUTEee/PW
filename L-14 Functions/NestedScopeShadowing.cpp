#include <iostream>

int main()
{
    int x = 6;
    {
        // int x = 8; redefinition can cause the error
        x = 8; // but here we are changing to say shadow the over global variable.
    }
    std::cout << x;
}