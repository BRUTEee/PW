#include <iostream>
using namespace std;


int hcf(int a, int b)
{
    if(a==0) return b;
    return hcf(b%a, a);
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << hcf(a,b);

}