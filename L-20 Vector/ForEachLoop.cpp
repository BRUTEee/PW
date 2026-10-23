#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5};
    for(int i=v.size()-1; i>=0; i--)
    {
        std::cout << v[i] << " ";
    }
    
    std::cout << std::endl;

    // Multiply even numbers by 2 and sqr the odd numbers

    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]%2==0)
        v[i] *=2;
        else
        v[i] *= v[i];
    }

    for(int e : v)
    {
        std::cout << e << " ";
    }

    

    for(int i=0; i<v.size(); i++)
    {
        if(v.size()%2==0) 
            v[i] *=2;
        else
            v[i] *= v[i];
    }

    std::cout << std::endl;

    for(int ele : v) /// we cant change
    {
        std::cout << ele << " ";
    }
}