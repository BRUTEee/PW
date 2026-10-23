#include <iostream>
#include <vector>

void changeArr(int arr[]) // Array passed by value
{
    arr[2]=20;
}

void changeVec(std::vector<int> &v) // Vector passed by reference
{
    v[2] = 45;
}

int main()
{
    int arr[]={1,2,3,4,5};
    changeArr(arr);
    std::cout << arr[2] << std::endl;

    std::vector<int> v = {1, 2, 3, 4, 5};
    changeVec(v);
    std::cout << v[2] << std::endl;
}