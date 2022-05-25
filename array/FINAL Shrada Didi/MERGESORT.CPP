// LINK : https://practice.geeksforgeeks.org/problems/merge-sort/1

void merge(int arr[], int l, int mid, int r)
{
    // Your code here

    int temp[r - l + 1];
    int p1, p2, k = 0;
    p1 = l;

    p2 = mid + 1;

    while (p1 <= mid && p2 <= r)
    {
        if (arr[p1] <= arr[p2])
            temp[k++] = arr[p1++];
        if (arr[p1] > arr[p2])
            // else
            temp[k++] = arr[p2++];
    }
    // if(p1!=mid)
    while (p1 <= mid)
        temp[k++] = arr[p1++];

    //   if(p2!=r)
    while (p2 <= r)
        temp[k++] = arr[p2++];

    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}
void mergeSort(int arr[], int l, int r)
{
    // code here
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}