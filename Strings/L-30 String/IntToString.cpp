#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    string s = to_string(n);
    cout << s << endl;
    // while(n != 0)
    // {
    //     int lastdigit = n%10;
    //     char ch = lastdigit + 48;
    //     s.push_back(ch);
    //     n /= 10;
    // }
    // //reverse
    // int i = 0, j = s.length() - 1;
    // while(i<j){
    // int temp = s[i];
    // s[i] = s[j];
    // s[j] = temp;
    // i++;
    // j--;
    // }
    // cout << s << endl;
}