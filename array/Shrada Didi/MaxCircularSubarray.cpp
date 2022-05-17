// link:https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1
int circularSubarraySum(int arr[], int num)
{

    int sum = 0;
// num--> size
    vector<int> arr1, arr2;
    int s1 = 0;
    for (int i = 0; i < num; i++)
    {
        arr2.push_back(-1 * arr[i]);
        sum += arr[i];
        s1 += arr[i];
        if (s1 <= 0)
        {
            arr1.push_back(s1);
            s1 = 0;
        }
        if (s1 > 0)
        {
            arr1.push_back(s1);
        }
    }
    int x = *max_element(arr1.begin(), arr1.end());
    int s2 = 0;
    for (int i = 0; i < arr2.size(); i++)
    {
        s2 += arr2[i];
        if (s2 <= 0)
        {
            arr2[i] = s2;
            s2 = 0;
        }
        if (s2 > 0)
        {
            arr2[i] = s2;
        }
    }
    int y = *max_element(arr2.begin(), arr2.end());

    if (sum + y == 0)
        return x;

    return max(x, sum + y);

    
}