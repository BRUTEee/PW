#include <iostream>
#include <stack>
using namespace std;

void printTopToBottom(stack<int> &st)
{
    stack<int> helper;

    while (!st.empty())
    {
        cout << st.top() << " ";
        helper.push(st.top());
        st.pop();
    }

    while (!helper.empty())
    {
        st.push(helper.top());
        helper.pop();
    }

    cout << endl;
}

void Push(int idx, int val, stack<int> & st)
{
    stack<int> helper;
    
    while(st.size() > idx)
    {
        helper.push(st.top());
        st.pop();
    }

    st.push(val);
    while(helper.size() > 0)
    {
        st.push(helper.top());
        helper.pop();
    }

}

int main()
{
    stack<int> st;
    st.push(10); st.push(20); st.push(30);
    st.push(40); st.push(50);

    printTopToBottom(st);
    Push(2,60,st);
    printTopToBottom(st);
    // Pop(4);
    // Get(1);
}