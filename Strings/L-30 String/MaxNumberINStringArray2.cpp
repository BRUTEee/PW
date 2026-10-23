#include <iostream>
#include <string>
#include <vector>
using namespace std;

string Bigger(string s1, string s2)
{
    // Remove leading zeros from s1
    int i = 0;
    while (i < s1.length() && s1[i] == '0')
        i++;

    int s1_real_length = s1.length() - i;

    // Remove leading zeros from s2
    int j = 0;
    while (j < s2.length() && s2[j] == '0')
        j++;

    int s2_real_length = s2.length() - j;

    // Compare lengths
    if (s1_real_length > s2_real_length)
        return s1;

    if (s2_real_length > s1_real_length)
        return s2;

    // Both numbers have the same length
    while (i < s1.length() && j < s2.length() && s1[i] == s2[j])
    {
        i++;
        j++;
    }

    // Both numbers are exactly the same
    if (i == s1.length())
        return s1;

    // Compare the first different digit
    if (s1[i] > s2[j])
        return s1;
    else
        return s2;
}

int main()
{
    vector<string> arr = {
        "9910",
        "221",
        "2219",
        "0000000123"};

    string max = arr[0];

    int m = arr.size();

    for (int i = 1; i < m; i++)
    {
        max = Bigger(arr[i], max);
    }

    cout << max << endl;
}