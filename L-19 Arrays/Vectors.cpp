#include <iostream>
#include <vector>

int main()
{
    // std::vector <int> arr1(5);
    // std::vector<int> arr(5,18);
    // int n = arr.size();
    // for(int i=0; i<5; i++)
    std::vector<int> arr(8, -1); // index 0 to 7
    for(int i=0; i<arr.size(); i++)
    {
        // std::cout << arr1[i] << " " << std::endl;
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    arr.push_back(5); // adds an element at last
    arr.push_back(14); // adds an element at last 
    arr.pop_back(); // removes last element
    arr.push_back(9); 
    for(int i=0; i<arr.size();i++)
    {
        std::cout << arr[i] << " ";
    }
}