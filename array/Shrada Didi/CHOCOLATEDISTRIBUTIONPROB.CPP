// LINK:https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
long long findMinDiff(vector<long long> a, long long N, long long M)
{
   
    sort(a.begin(), a.end());
    long long minp = INT_MAX;
    for (int i = M - 1; i < N; i++)
    {
        if ((a[i] - a[i - M + 1]) < minp)
            minp = (a[i] - a[i - M + 1]);
    }
    return minp;
}