#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 922, 324, 64, 67};
    reverse(v.begin() + 2, v.end());
    for(auto i: v)
    cout<<i<<" ";
    return 0;
}