// link;https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
bool find3Numbers(int A[], int n, int X)
{

    sort(A, A + n);

    for (int i = 0; i < n; i++)

    {
        int k = X - A[i];

        int p1 = i + 1, p2 = n - 1;
        while (p1 < p2)
        {
            int s = A[p1] + A[p2];
            if (s < k)
            {
                p1++;
            }
            if (s > k)
            {
                p2--;
            }

            if (s == k)
            {
                return 1;
            }
        }
    }
    return 0;
}