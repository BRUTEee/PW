#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n = s.size();

    int i = 0, j = n/2-1;

    while(i<=j)
    {
        swap(s[i], s[j]);

        i++;
        j--;
    }
    cout << s;
}