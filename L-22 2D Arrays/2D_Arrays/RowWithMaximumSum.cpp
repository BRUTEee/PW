#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int arr[][4] = {{34,5,6,7}, {2,3,4,4}, {2,3,4,5}};
    int maxRow = -1, maxSum = INT_MIN;
    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<4; j++)
        {
            sum += arr[i][j];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << maxRow << " " << maxSum;
}