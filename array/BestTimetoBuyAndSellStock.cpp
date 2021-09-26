    
    int maxProfit(vector<int>& prices) {
        
     
        
       
        int maxp=0;

        
        int v[prices.size()];
        v[prices.size()-1]=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(prices[i]<v[i+1])
          v[i]=v[i+1];
           else
                v[i]=prices[i];
                
        }
         // for(int i=0;i<prices.size();i++)
         //     cout<<v[i];
        for(int i=0;i<prices.size();i++)
        {
            if(v[i]-prices[i]>maxp)
                maxp=v[i]-prices[i];
        }
return maxp;
    }
    



