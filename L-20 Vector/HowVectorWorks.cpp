#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(9);
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.push_back(1);
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.push_back(2);
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.push_back(3);
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.pop_back();
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.pop_back();
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.push_back(4);
    std::cout << v.size() << " " << v.capacity() << std::endl;
    for(int i=0; i<v.size();i++)
    {
        std::cout << v[i] << " ";
    }
}