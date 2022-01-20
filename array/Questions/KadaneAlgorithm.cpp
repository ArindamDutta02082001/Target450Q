// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

// m1: using an extra space
int maxSubarraySum(int arr[], int n)
{

    long temp[n] = {-9}, s = 0;

    for (int i = 0; i < n; i++)
    {
        s += arr[i];

        if (s <= 0)
        {
            temp[i] = s;
            s = 0;
        }
        if (s > 0)
            temp[i] = s;
    }

    long maxi = -99;

    for (int i = 0; i < n; i++)

    {

        if (temp[i] > maxi)
            maxi = temp[i];
    }
    return maxi;
}

// m2: without using extra space
int maxSubarraySum(int arr[], int n)
{

    int maxi = -999;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        t += arr[i];
        if (t < 0)
        {
            arr[i] = t;
            t = 0;
        }
        else
        {
            arr[i] = t;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
}