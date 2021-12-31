
// link : https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#
// FIND SUBARRAY WITHIN AN ARRAY THAT EQUALS K
// O(n) method

    vector<int> subarraySum(int arr[], int n, long long s)
    {
      vector<int>r;
      int sum=arr[0],ind=0; 
        for(int i=1;i<=n;i++)
        {
            while(sum>s && ind<i+1)
            {
                sum-=arr[ind];
                ind++;
            }
            
            if(sum==s)
            {
                r.push_back(ind+1);
                r.push_back(i);
            
                break;
            }
            
            if(i<n)
            sum+=arr[i];
        }
        if(r.size()==0)
        {
            r.push_back(-1);
            return r;
        }
        else
        return r;
        // Your code here
    
    
   
    }



    // O(N^2)
     vector<int> subarraySum(int arr[], int n, long long s)
    {
    vector<int> v;int f=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int sum=arr[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum==s)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                f=1;
                break;
            }
          
        }
        if(f==1)
        break;
        
    }
    if(v.size()==0)
    {
        v.push_back(-1);
      return v;
    }
    else
    return v;
    }