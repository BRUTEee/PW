#include <iostream>
#include <vector>

void print(std::vector<int> arr)
{
    for(int ele : arr)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}



int main()
{
    std::vector <int> arr = {1,2,3,4,5};
    print(arr);
    int i = 0, j = arr.size() - 1;
    // for(int i=0, j=arr.size()-1; i<j; i++, j--)
    while( i < j)
    {
        // std::swap(arr[i], arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for(int ele : arr)
    {
        std::cout << ele << " ";
    }

}