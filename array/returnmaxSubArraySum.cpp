#include <bits/stdc++.h>
using namespace std;
// ***********Correct but gfg generated some random errors for huge input file******************
long long maxSubarraySum(int[], int);

int main()
{

    int arr[] = {-1, -2, -3, -4};
    int l = 4;
    cout<<maxSubarraySum(arr, l);
    return 0;
}

long long maxSubarraySum(int arr[], int n)
{

    int temp[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if (s >= 0)
            temp[i] = s;
        if (s < 0)
        {
            temp[i] = arr[i];
            s = 0;
        }
    }

    long long max = -9999999999;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] > max)
            max = temp[i];
    }

    return max;
}
