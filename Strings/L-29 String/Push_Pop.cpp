#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "Sheshh";
    s.pop_back();
    s.push_back('s');
    cout << s << endl;

    sort(s.begin(), s.end());
    cout << s << endl; // it sort as per the ASCII values
    reverse(s.begin(), s.end());
    cout << s << endl;
}