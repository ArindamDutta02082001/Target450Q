// link:https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
int getPairsCount(int arr[], int n, int k)
{
    map<int, int> m;
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        int l = k - arr[i];
        if (m.find(l) != m.end())
        {
            ret += m[l];
        }
        m[arr[i]]++;
    }
    return ret;
}