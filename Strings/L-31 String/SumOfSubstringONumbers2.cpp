#include <iostream>
#include <string>
using namespace std;

int exponent(int x)
{
    int result = 1;

    for(int i = 0; i<x; i++)
    {
    result = result * 10;
    }

    return result;
}

int main()
{
    string s = "8282";
    int n = s.length();

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int digit = s[i] - '0';
        int power = exponent(n-i);
        int sumSubstrings = digit * (i+1) * (power-1) / 9;
        sum +=sumSubstrings;
    }
 cout << sum ;

}