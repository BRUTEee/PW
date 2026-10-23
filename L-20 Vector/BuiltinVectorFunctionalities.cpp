#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {12,3, 44, 5, 66}; 
    sort(v.begin(), v.end());
    for(int ele : v)
    std::cout << ele << " ";

    std::cout << std::endl;

    reverse(v.begin(), v.end());
    for(int ele : v)
    std::cout << ele << " ";

    std::cout << std::endl;

    reverse(v.begin()+1, v.end()-1);
    for(int ele : v)
    std::cout << ele << " ";
}