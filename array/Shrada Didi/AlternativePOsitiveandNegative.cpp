
// link : https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1#
void rearrange(int arr[], int N)
{

    vector<int> p, n;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= 0)
            p.push_back(arr[i]);
        if (arr[i] < 0)
            n.push_back(arr[i]);
    }

    int i = 0, j = 0, even = 1, k = 0;

    while (i < p.size() && j < n.size())
    {
        if (even == 1)
        {
            arr[k++] = p[i++];
            even *= -1;
        }
        else
        {
            arr[k++] = n[j++];
            even *= -1;
        }
    }

    while (i < p.size())
    {
        arr[k++] = p[i++];
    }
    while (j < n.size())
    {
        arr[k++] = n[j++];
    }
}