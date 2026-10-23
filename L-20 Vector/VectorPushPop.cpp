#include <iostream>
#include <vector>

int main()
{
    vector<int> v(7);
    v.push_back(-6);
    std::cout << v.size() << " " << v.capacity() << std::endl;

    return 0;
}