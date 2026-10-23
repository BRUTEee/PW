#include <iostream>
using namespace std;

void print(int n)
{
    if(n==0) return; // base case - to stop/direction
    cout << n << " "; // work - to achieve
    print(n-1); //  call - by calling
}

int main()
{
    int n;
    cin >> n;
    print(n);
}