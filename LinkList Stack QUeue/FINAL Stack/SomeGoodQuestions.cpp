// Insert element at the stack bottom without xtra space
// link:https://www.codingninjas.com/codestudio/library/program-to-insert-an-element-at-the-bottom-of-a-stack
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Function to insert element at the bottom of stack
stack<int> insert_at_bottom(stack<int> st, int x)
{

    // if stack is empty, push the element
    if (st.empty())
    {
        st.push(x);
    }
    else
    {

        // stores the top element
        int a = st.top();

        // pop the stored top element
        st.pop();

        // Perform same operation with remaining element
        st = insert_at_bottom(st, x);

        // push the previous top element again
        st.push(a);
    }
    return st;
}

int main()
{
    int n, x;

    // Enter number of elements in the stack and their content and push it in the stack
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    // enter element to be inserted at the bottom
    cin >> x;

    // recursively call insert at bottom function
    st = insert_at_bottom(st, x);

    // print the stack
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

// DELETE MIDDLE ELEM FROM THE STACK
// LINK:https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1/
// 1.RECURSIVE
int count = 0;
void dele(stack<int> &s)
{
    if (s.size() == count)
    {
        s.pop();
        return;
    }
    else
    {
        int t = s.top();
        s.pop();
        dele(s);
        s.push(t);
    }
}

void deleteMid(stack<int> &s, int n)
{

    count = (n + 1) / 2;
    dele(s);
}

// 2.NORMAL LOOP
void deleteMid(stack<int> &s, int n)
{
    vector<int> v;
    count = (n + 1) / 2;
    dele(s);
    while (count--)
    {
        v.push_back(s.top());
        s.pop();
    }
    s.pop();
    reverse(v.begin(), v.end());
    for (auto i : v)
        s.push(i);
}

// REVERSE THE STACK
// LINK:https://practice.geeksforgeeks.org/problems/reverse-a-stack/1/
// 1. NORMAL
// -DO-
// 2.RECURSIVE
vector<int> rev;
void reve(stack<int> &s)
{
    if (s.size() == 0)
        return;

    int temp = s.top();
    s.pop();
    reve(s);
    rev.push_back(temp);
}
vector<int> Reverse(stack<int> St)
{
    reve(St);
    reverse(rev.begin(), rev.end());
    return rev;
}