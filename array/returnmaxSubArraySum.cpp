// link:https://leetcode.com/problems/maximum-subarray/
int maxSubArray(vector<int> &nums)
{

    int s = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        s += nums[i];
        if (s <= 0)
        {
            nums[i] = s;
            s = 0;
        }
        else
        {
            nums[i] = s;
        }
    }
    return *max_element(nums.begin(), nums.end());
}