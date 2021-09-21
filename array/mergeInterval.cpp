#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &);

int main()
{

    // [[1,3],[2,6],[6,10],[15,18]]
    // [[1,4],[4,5]]

    // op
    // [[1,10],[15,18]]
    // [[1,5]]
    vector<vector<int>> v = {{1, 3}, {2, 6}, {6, 10}, {15, 18}};
    vector<vector<int>> t = merge(v);
    for (auto i : t)
    {
        for (auto it : i)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

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

    //         for(auto it:intervals)
    //         {

    //             if(it[0]<=t[1])
    //             {
    //                 t[1]=max(it[1],t[1]);
    //             }
    //             else
    //             {
    //                 temp.push_back(t);
    //                 t=it;
    //             }

    //         }

    // temp.push_back(t);

    temp.push_back({f, b});
    return temp;
}