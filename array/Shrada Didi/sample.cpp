#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // for (auto i : s){}
    // cout << i;
    set<int>::iterator i = s.begin();
    for (; i != s.end(); i++)
        cout << *i;

    return 0;
}