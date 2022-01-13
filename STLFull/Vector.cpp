#include <bits/stdc++.h>
using namespace std;
int main()

{

    vector<int> v;
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(5);
    //  20 10 30 5

    // v.pop_back();
    // last element popped
    // 20 10 30 

    // sort(v.begin(), v.end() - 1);
    // v.erase(v.end()-2);
    auto it=find(v.begin(),v.end()-2,5);
    cout<<count(v.begin(),v.end()-1,5);

    for(vector<int>::iterator i=v.begin();i!=v.end();i++)
    {
        // cout<<*i;
    }
    return 0;
}