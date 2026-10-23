#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> arr = {"9910","221","2219,"0000000123"};
    string max = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(stoi(arr[i]) > stoi(max))
        max = arr[i];
    }

    cout << max << endl;

}