#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Arjun is a smartest boy";
    int n = s.length();
    int i = 0, j = 0, maxlen = 0;
    string ans = "";
    while(j<n)
    {
        if(s[j] != ' ') j++;
        else
        {
            int len = j - i;
            if(len>maxlen) 
            {
                maxlen = len;
                ans = s.substr(i, len);
            }
            // jump to next word's starting 
            i = j; // i and j both are at space.
            while(i<n && s[i] == ' ') 
            {
                i++;
                j++;
            }
        }
    }
    cout << maxlen << " " << ans << endl; 
}