// leetcode 189

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

void rotate(vector<int> &nums, int k)
{

    // method 1

    vector<int> t;

    k %= nums.size(); // vvi step- this is used to reduce k if k>size of array  else if k>size of array then it will cause error

    int n = nums.size();

    for (int i = n - k; i < nums.size(); i++)
    {
        t.push_back(nums[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        t.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = t[i];
    }

    // method 2
    //         k%=nums.size();
    //         reverse(nums.begin(),nums.end());
    //         reverse(nums.begin(),nums.begin()+k);
    //           reverse(nums.begin()+k,nums.end());
}