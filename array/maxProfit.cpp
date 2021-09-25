#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &);

int main()
{
    vector<int> V = {7,1,5,3,6,4};
    cout << maxProfit(V);
    return 0;
}

int maxProfit(vector<int> &prices)
{

    // int mini=9999,minindex;
    int maxp = 0;
    int mani = -9999, manindex=0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] < mani)
            {
                mani = prices[j];
                manindex = j;
            }
        }
            if (prices[i] - prices[manindex] >= 0)
                maxp = max(maxp, (prices[i] - prices[manindex]));
                // else
                // maxp=0;
            mani = -9999;
    }

    return maxp;
}