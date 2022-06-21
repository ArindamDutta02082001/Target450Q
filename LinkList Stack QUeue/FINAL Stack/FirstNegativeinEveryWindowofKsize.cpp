// link:https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#
vector<long long> printFirstNegativeInteger(long long int A[],

                                            long long int N, long long int k)
{

    vector<long long> v;
    for (long long int i = 0; i <= N - k; i++)
    {
        for (long long int j = i; j < i + k; j++)
        {
            if (A[j] < 0)
            {
                v.push_back(A[j]);
                break;
            }
            if (j == i + k - 1)
                v.push_back(0);
        }
    }
    return v;
}