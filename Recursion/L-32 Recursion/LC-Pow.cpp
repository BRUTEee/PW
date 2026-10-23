#include <iostream>
using namespace std;

int power(int a, int b)
{
    if(b==0) return 1;
    int p = power(a, b/2);
    return (b%2==0) ? p * p : p * p * a;
}

int main()
{
    int a , b;
    cin >> a >> b;

    cout << power(a, b);

}