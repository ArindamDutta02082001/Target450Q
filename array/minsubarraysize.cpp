#include <bits/stdc++.h>
using namespace std;
int sumsub(int[], int, int);
int main()
{
    int a[] = {6, 3, 4, 5, 4, 3, 7, 9};

    cout << sumsub(a, 8, 16); // ans should be 3 as 3 7 9 min subarray  sumsub(a, 8, 16);
    return 0;
}

// correct
int sumsub(int arr[], int n, int x)
{

    int s = 0, l = 0, minL = 999, sum = 0;

    while (l < n)
    {
        while (sum <= x && l < n)
        {
            sum += arr[l++];
        }

        while (sum > x && s < n)
        {
            if (l - s < minL)
                minL = l - s;
            sum -= arr[s++];
        }
    }
    return minL;
}