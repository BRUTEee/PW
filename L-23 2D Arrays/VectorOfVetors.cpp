#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {2,7,8,9};
    vector<int> v2 = {2,3};
    vector<int> v3 = {2};
    vector<int> v4 = {1,4,5,7};

    vector<vector<int>> v = {v1,v2,v3,v4}; // Jagged Array
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout << v[i][j] <<  " ";
        }

        cout << endl;
    }
}