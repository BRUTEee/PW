#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Ayush";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n-i; j++)
        {
            cout << s.substr(i, j) << endl;
        }
    }

    return 0;
}