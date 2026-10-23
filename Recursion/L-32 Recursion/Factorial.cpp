#include <iostream>
using namespace std;

int fact(int n)
{
    // return (n==0 || n==1) ? 1 : n * fact(n-1);

    if(n==0 || n==1) return 1;
    int ans = n*fact(n-1);
    return ans;

    // if(n==0 || n==1) retunr 1;
    // return n * fact(n-1);
}

int main()
{
    int n{};
    cin >> n;

    cout << fact(n);
}