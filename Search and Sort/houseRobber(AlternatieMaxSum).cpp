// link:https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1
int FindMaxSum(int arr[], int n)
{

    int dp[n];
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    if (n == 2)
        return max(arr[0], arr[1]);

    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(arr[i] + dp[i - 2], dp[i - 1]);
    }
    return dp[n - 1];
}