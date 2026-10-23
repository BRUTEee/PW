#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter cols: ";
    cin >> n;
    vector<int> v(m,0); // single vector
    vector<int>> arr(m, vector<int>>(n,0));
    // output
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}