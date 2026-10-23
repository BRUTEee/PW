#include <iostream>

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << arr << std::endl;
    std::cout << &arr[0] << std::endl;
    std::cout << &arr[1] << std::endl;
    std::cout << &arr[2] << std::endl;

}