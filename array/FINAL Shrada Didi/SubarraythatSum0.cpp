//  link:https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
concept: while traversing if you get the sum as 0 then then one of the
bool subArrayExists(int arr[], int n)
{
    map<int, int> m;
    int t = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        t += arr[i];
        if (t == 0)
            c++;
        else
        {
            if (m.find(t) != m.end())
                c += m[t];
        }
        m[t] += 1;
    }

    if (c >= 1)
        return true;
    return false;
}