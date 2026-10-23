#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x = "Hey, I am Ayush Pathak";
    // cout << "Hey, I am Ayush Pathak" << endl; // this is also string not text.
    cout << x << endl;
    string s;
    // cin >> s; this will only take one word afte space it will behave its of another input.
    getline(cin, s);
    cout << s;
}