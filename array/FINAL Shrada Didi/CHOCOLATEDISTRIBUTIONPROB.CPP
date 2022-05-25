// LINK:https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
long long findMinDiff(vector<long long> a, long long N, long long M)
{
    sort(a.begin(),a.end());
    long long p1=0,p2=m-1;
    int mini=INT_MAX;
    for(long long i=m;i<=n;i++)
    {
        if(a[p2]-a[p1]<mini)
        mini=a[p2]-a[p1];
        p1++;
        p2++;
        
    }
    return mini;
}