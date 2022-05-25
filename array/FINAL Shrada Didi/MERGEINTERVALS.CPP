// LINK : https://leetcode.com/problems/merge-intervals/submissions/
// USING STACK
// m1:
vector<vector<int>> merge(vector<vector<int>> &ine)
{
    vector<vector<int>> ret;
    sort(ine.begin(), ine.end());
    stack<pair<int, int>> s;
    s.push(make_pair(ine[0][0], ine[0][1]));
    for (int i = 1; i < ine.size(); i++)
    {
        if (ine[i][0] <= s.top().second)
        {
            pair<int, int> p = make_pair(s.top().first, max(s.top().second, ine[i][1]));
            s.pop();
            s.push(p);
        }
        else
            s.push(make_pair(ine[i][0], ine[i][1]));
    }

    while (!s.empty())
    {
        vector<int> t;
        t.push_back(s.top().first);
        t.push_back(s.top().second);
        ret.push_back(t);
        s.pop();
    }
    reverse(ret.begin(), ret.end());
    return ret;
}


// m2:

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    vector<vector<int>> temp;

    sort(intervals.begin(), intervals.end());
    int f = intervals[0].front(), b = intervals[0].back();

    for (int i = 0; i < intervals.size(); i++)
    {
        if (intervals[i].front() <= b)
        {
            b = max(intervals[i].back(), b);
        }

        else
        {
            temp.push_back({f, b});
            f = intervals[i].front();
            b = intervals[i].back();
        }
    }

    vector<int> t = intervals[0];
    temp.push_back({f, b});
    return temp;
}