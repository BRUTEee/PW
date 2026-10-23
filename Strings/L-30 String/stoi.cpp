#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="";
    cout << "Enter the String: ";
    getline(cin, s);

    int n = stoi(s);
    cout << n << endl;
}