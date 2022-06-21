// link:https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

// recursive approach
int knapSack(int W, int wt[], int val[], int n)
{
    if (W == 0 || n == 0)
        return 0;
    if (wt[n - 1] <= W)
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
    else
        return knapSack(W, wt, val, n - 1);
}

// Memoization
int M = 0, N = 0;
int mat[99][99];
int knapsack(int W, int wt[], int val[], int n, int mat[99][99])
{
    if (W == 0 || n == 0)
        return 0;
    if (wt[n - 1] <= W)
        return mat[n][W] = max(val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1, mat), knapsack(W, wt, val, n - 1, mat));
    else
        return mat[n][W] = knapsack(W, wt, val, n - 1, mat);
}
int knapSack(int W, int wt[], int val[], int n)
{

    M = n;
    N = W;

    memset(mat, -1, sizeof(mat));
    return knapsack(W, wt, val, n, mat);
}

// top-down approach  (BEST)
