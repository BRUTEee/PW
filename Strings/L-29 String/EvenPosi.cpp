#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n = s.size();

    for(int i=0; i<n; i+=2)
    {
        s[i] = 'a';
    }

    cout << s;
    return 0;
}