#include <iostream>
using namespace std;

int main()
{
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[m+n];

    int i = 0, j = 0, k = 0;

    while (i<m && j<n)
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else 
            arr3[k++] = arr2[j++];
    }

    while(j<n)
        arr3[k++] = arr2[j++];
    while(i<m)
        arr3[k++] = arr1[i++];

    for(int i=0;i<m+n; i++)
    {
        cout << arr3[i] << " ";
    }


}