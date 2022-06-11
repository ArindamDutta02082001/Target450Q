// link:https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#:~:text=Next%20greater%20element%20of%20an,last%20element%20is%20always%20%2D1.
vector<long long> nextLargerElement(vector<long long> arr, int n)
{

    vector<long long> ret;
    stack<long long> s;

    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && arr[i] >= s.top())
        {

            s.pop();
        }
        if (s.empty())
            ret.push_back(-1);
        else
            ret.push_back(s.top());

        s.push(arr[i]);
    }
    reverse(ret.begin(), ret.end());
    return ret;
}