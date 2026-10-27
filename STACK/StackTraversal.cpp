#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &st)
{
    while(st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(18); st.push(33);
    st.push(1); st.push(45);
    st.push(7);

    print(st);

    print(st); // nothing comes as stack get empty
}