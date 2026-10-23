#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Ayush";
    string sub = s.substr(0,3); // from 0 start, till 3rd length
    cout << sub << endl; // 
    cout << s.substr(2) << endl; // 2 to end
}