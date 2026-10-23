#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    string s = to_string(abs(n));
    int len = s.length();
    cout << len << endl;

    return 0;
}