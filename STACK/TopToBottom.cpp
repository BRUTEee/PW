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

void printBottomToTop(stack<int> &st)
{
    stack<int> helper;

    while (!st.empty())
    {
        helper.push(st.top());
        st.pop();
    }

    while (!helper.empty())
    {
        cout << helper.top() << " ";
        st.push(helper.top());
        helper.pop();
    }

    cout << endl;
}

void printMiddle(stack<int> &st)
{
    if (st.empty())
    {
        cout << "Stack is empty!" << endl;
        return;
    }

    stack<int> helper;
    int n = st.size();
    int middle = n / 2;

    for (int i = 0; i < middle; i++)
    {
        helper.push(st.top());
        st.pop();
    }

    cout << "Middle element: " << st.top() << endl;

    while (!helper.empty())
    {
        st.push(helper.top());
        helper.pop();
    }
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Top to Bottom: ";
    printTopToBottom(st);

    cout << "Bottom to Top: ";
    printBottomToTop(st);

    printMiddle(st);

    return 0;
}