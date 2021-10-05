// ************array aproach**************
// but it takes O(n2) so tle
// you have to do do in O(n) space using Stack
long long getMaxArea(long long arr[], int n)
{
    int maxarea = -999;

    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
                r++;
            else
                break;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= arr[i])
                l++;
            else
                break;
        }

        int area = (l + r + 1) * arr[i];
        if (area > maxarea)
            maxarea = area;
    }
    return maxarea;

    // Your code here
}

// *******Using Stack ***********