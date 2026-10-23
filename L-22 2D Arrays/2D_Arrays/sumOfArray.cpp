#include <iostream>;
using namespace std;
int main()
{
    int arr[][4] = {{5, 6, 7, 7}, {4, 4, 5, 5}, {4, 4, 4, 4}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}