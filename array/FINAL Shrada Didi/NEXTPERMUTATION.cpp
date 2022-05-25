// https://practice.geeksforgeeks.org/problems/next-permutation5226/1#
vector<int> nextPermutation(int N, vector<int> arr)
{

    int ind = -1;
    for (int i = N - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            ind = i - 1;
            break;
        }
    }
    if (ind == -1)
        reverse(arr.begin(), arr.end());

    else
    {
        int prev = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            if (arr[i] > arr[ind])
            {
                prev = i;
                break;
            }
        }
        swap(arr[ind], arr[prev]);
        reverse(arr.begin() + ind + 1, arr.end());
    }
    return arr;
}
