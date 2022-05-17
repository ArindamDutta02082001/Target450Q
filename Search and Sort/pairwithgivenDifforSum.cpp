// Pair with given Diff
// link:https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1#
// 2 - pointer method
// s1-sort
// s2-find the diff d
bool findPair(int arr[], int size, int n)
{
    sort(arr, arr + size);
    int l = 0, h = 0, c = 0;
    while (h < size)
    {
        int d = arr[h] - arr[l];
        if (d == n && l != h)
        {
            c = 1;
            break;
        }
        if (d > n)
            l++;
        else
            h++;
    }

    if (c == 1)
        return true;
    else
        return false;
}

// Pair with given Sum
// 2 - pointer method
// s1-sort
// s2-find the sum s