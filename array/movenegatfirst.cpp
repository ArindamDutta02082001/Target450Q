#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {-12, -11, -13, 5, 6, -7, 5, 3, -6};
    int l = sizeof(ar) / sizeof(ar[0]);
    int t = 0, b[l];
    for (int i = 0; i < l; i++)
    {
        if (ar[i] < 0)
        {
            b[t] = ar[i];
            t++;
        }
    }

    for (int i = 0; i < l; i++)
    {
        if (ar[i] >= 0)
        {
            b[t] = ar[i];
            t++;
        }
    }

    for (int i = 0; i < l; i++)
    {
        cout << b[i] << " ";
    }
    return 0;

    // int j = 0;    // more advanced by using quicksort algo
    // for (int i = 0; i < l; i++)
    // {
    //     if (ar[i] < 0)
    //     {
    //         if (i != j)
    //             swap(ar[i], ar[j]);
    //         j++;
    //     }
    // }
    // for (int i = 0; i < l; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    // return 0;
}