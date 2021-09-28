

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {2, 1, 5, 6, 3}, k = 3;
    int l = 0, r = 5 - 1;
    int mini=0;

    for (int i = 0; i < k; i++)
    {
        if(arr[i]<k)
        mini++;
    }
    // for (int i = 0; i < mini; i++)
    while(l<mini)
    {
        if (arr[l] < k)
        {
            l++;
        }
        if (arr[l] >= k)
        {
            swap(arr[l], arr[r]);
            r--;
        }
    }
    cout<<l;
    return 0;
}
