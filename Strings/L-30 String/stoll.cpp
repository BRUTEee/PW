#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "";
    cout << "Enter the String: ";
    getline(cin, s);

    long long z = stoll(s);
    cout << z << endl;
}