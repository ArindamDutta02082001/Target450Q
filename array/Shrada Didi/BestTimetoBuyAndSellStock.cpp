

// method 1:
int maxProfit(vector<int> &prices)
{

    int v[prices.size()];
    v[prices.size() - 1] = prices[prices.size() - 1];
    for (int i = prices.size() - 2; i >= 0; i--)
    {
        if (prices[i] < v[i + 1])
            v[i] = v[i + 1];
        else
            v[i] = prices[i];
    }
    // for(int i=0;i<prices.size();i++)
    //     cout<<v[i];
    int maxp = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (v[i] - prices[i] > maxp)
            maxp = v[i] - prices[i];
    }
    return maxp;
}


method 2:
    int maxProfit(vector<int>& prices) {

        if(prices.size()==1)
            return 0;
        
       int mini=prices[0],maxp=-999; 
        for(int i=1;i<prices.size();i++)
        {
         
            if( prices[i]<mini)
            {
                mini=prices[i];
                if(prices[i]-mini>maxp)
                    maxp=prices[i]-mini;
            }
            else
            {
                 if(prices[i]-mini>maxp)
                    maxp=prices[i]-mini;
                
                            }
        }
        
        return maxp;
        
       
    }