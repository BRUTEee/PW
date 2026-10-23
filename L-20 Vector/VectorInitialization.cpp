#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5};
    std::cout << v[1] << std::endl;
    std::cout << v.size() << std::endl;
    std::cout << v.capacity() << std::endl;
}