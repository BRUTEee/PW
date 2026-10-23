#include <iostream>

int main()
{
   // int arr[]={20} // static allocation
    // fixed at the compile time. automatic when block end.
    int* brr = new int[7]; //dynamic allocation
    // dynamic can be decided at the runtime. have to delete manually delete[] brr.
    brr[0] = 4;
    for(int i=0; i<7; i++)
    {
        std::cout << brr[i] << " ";
    }

    return 0;
}