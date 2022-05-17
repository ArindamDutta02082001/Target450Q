// link:https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1#
int search(int a[], int l, int h, int k)
{
    // m1:
    // for(int i=0;i<h;i++)
    // {
    //     if(A[i]==key)
    //     return i;
    // }
    // return  -1;
    // m2:
    int ans = 0;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == k)
            return mid;
        if (a[l] < a[mid])
        {
            if (k >= a[l] && k < a[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (k <= a[h] && k > a[mid])
                l = mid + 1;
            else
                h = mid - 1;
        }

        return -1;
    }
}