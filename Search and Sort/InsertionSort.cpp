// link:https://practice.geeksforgeeks.org/problems/insertion-sort/1
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int t = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > t)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
        arr[j + 1] = t;
    }
    // code here
}