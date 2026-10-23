#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n = s.size();

    int vowels = 0;
    for(int i = 0; i<n; i++)
    {
        char ch = s[i];
        if(ch>=65 && ch<=90)
        ch += 32;
        if(ch == 'a' || ch == 'e' || ch == 'i'|| 
           ch == 'o' || ch == 'u')
        // if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || 
        //     s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
        //     s[i] == 'u' || s[i] == 'U')
        vowels++;
    }

    cout << vowels << endl;

}