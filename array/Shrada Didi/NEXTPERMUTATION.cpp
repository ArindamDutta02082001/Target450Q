// https://practice.geeksforgeeks.org/problems/next-permutation5226/1#
vector<int> nextPermutation(int N, vector<int> arr)
{
    // code here
    int ind = -1;
    for (int i = arr.size() - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
        reverse(arr.begin(), arr.end());

    else
    {
        int prev = ind;
        for (int i = ind + 1; i < N; i++)
        {
            if (arr[i] > arr[ind - 1] && arr[i] <= arr[prev])
                prev = i;
        }
        swap(arr[ind - 1], arr[prev]);
        reverse(arr.begin() + ind, arr.end());
    }
    return arr;
}
