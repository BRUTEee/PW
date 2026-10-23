#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "926";
    int n = s.length();

    // Gen all the substrings and add them.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int current = 0;
        for (int j = i; j < n; j++)
        {
        //  current = current * 10 + (s[j] - 48);
            current = current * 10 + (s[j] - '0');
            sum += current;
        }
    }

    cout << sum << endl;

    return 0;
}