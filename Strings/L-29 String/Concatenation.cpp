#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Abc";
    string s2 = "def";
    string s3 = "111";
    string s4 = "222";
    string s5 =  s1+s3;
    string s = "abc";
    // string x = s+4; error

    string y = s + '4';
    string A = "Ayush ";
    A += "Pathak"; // A = A("Ayush") + "Pathak"
    cout << A << endl;

    cout << y << endl;
    // cout << x << endl; // error
    // cout << s+4 << endl; // error
    cout << s5 << endl;
    cout << s3+s4 << endl;
    cout << s1+s2;
}