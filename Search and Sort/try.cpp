#include <bits/stdc++.h>
using namespace std;

bool applicable(int arr[], int n, int mid, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int t = arr[i] - mid;
        if (t >= 0)
            s += arr[i];
    }
    return s >= m;
}

int main()
{
    int n, m, arr[n];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int l = 0, h = arr[n - 1];
    int ans = 0;

    while (l < h)
    {
        int mid = (l + h) / 2;
        if (applicable(arr, n, mid, m))
        {
            h = mid;
            ans = mid;
        }
        else
            l = mid + 1;
    }

    cout << ans;

    return 0;
}