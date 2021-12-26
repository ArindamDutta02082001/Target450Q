#include <bits/stdc++.h>
using namespace std;
long long countTriplets(long long[], int, long long);

int main()
{

    long long arr[] = {-2, 0, 1, 3};
    // int n = 8;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     for (int j = i + 1; j <i+2; j++)
    //     {
    //         // int j=i+1;
    //         int k = j + 1;
    //         // while(j<k){
    //         cout << "{" << arr[i] << arr[j] << arr[k] << "}";
    //         // }
    //     }
    //     cout << "\n";
    // }
    countTriplets(arr, 4, 2);
    return 0;
}

long long countTriplets(long long arr[], int n, long long sum)
{
    long long c = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            // int j=i+1;
            for (int k = j + 1; k < n; k++)
            {
                // while(j<k){
                int temp = arr[i] + arr[j] + arr[k];
                if (temp < sum)
                    cout << temp << " ";
            }
            // }
        }
    }
    // Your code goes here
    return c;
}