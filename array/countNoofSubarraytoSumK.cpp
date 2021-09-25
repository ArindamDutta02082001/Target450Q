//  ************* count no of subarray sum to k************
int subarraySum(vector<int> &nums, int k)
{

    map<int, int> num;
    int k2 = 0, count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        k2 += nums[i];
        if (k2 == k)
            count++;

        if (num.find(k2 - k) != num.end())
        {

            count += num[k2 - k];
        }
        num[k2] += 1;
    }

    return count;
}