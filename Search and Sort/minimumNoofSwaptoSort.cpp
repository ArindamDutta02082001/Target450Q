// link:https://practice.geeksforgeeks.org/problems/minimum-swaps/1
int minSwaps(vector<int> &nums)
{
    int swapc = 0;
    int n = nums.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({nums[i], i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        // pair<int,int> t=v[i]; // dont take t else tle marega bhai , copy krne mei bhi time lga ta hai hai ye mc
        if (v[i].second != i)
        {
            swapc++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return swapc;
}