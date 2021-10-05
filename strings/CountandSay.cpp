#include <bits/stdc++.h>
using namespace std;
string countAndSay(int);
int main()
{
    cout << countAndSay(4);
    return 0;
}
string countAndSay(int n)
{

    // static int k=1;
    if (n == 1)
        return "1";

    string k = countAndSay(n - 1);
    string t;
    sort(k.begin(), k.end());
    int nx = k.length(), m = stoi(k);
    int c = 0, cd = k[nx - 1];
    for (int i = 0; i < nx; i++)
    {
        int t = m % 10;
        if (t == cd)
            c++;
        else if(t!=cd || i==nx-1)
        {
            t += cd + c;
            cd = t;
            c = 0;
        }
        m = m / 10;
    }
    reverse(t.begin(), t.end());
    return t;
}