#include <iostream>
int x = 10; // Global Variable

int change()
{
    int x = 45;
}
int main()
{
    int x = 80;
    std::cout << x << std::endl;
    change(); // Its just like there's different container
    // always first local will work and than check for global.
    std::cout << x << std::endl;
}