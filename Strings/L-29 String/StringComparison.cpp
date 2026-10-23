#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "ABC";
    string s2 = "DEF";
    
    if(s1 == s2) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    if (s1 > s2) cout << s1 << " is greater than " << s2 << endl;
    else cout << s2 << " is greater than " << s1 << endl;


    //Empty String
    string em = "";
    // OR
    string em2;
}