// link:https://practice.geeksforgeeks.org/problems/smaller-on-left20360700/1#
vector<int> Smallestonleft(int arr[], int n)
{
    vector<int> ret;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        auto it = s.lower_bound(arr[i]);
        if (it == s.begin())
            ret.push_back(-1);
        else
        {
            it--;
            ret.push_back(*it);
        }
        s.insert(arr[i]);
    }
    return ret;
    // Complete the function
}