// remember if the array is  1 5 6 1 and k=6  the ans will be 1 5    5 1     and wont count 6 as it said pairs to be counted
// gfg count pair of sum
int getPairsCount(int arr[], int n, int k) {
        // code here
       map<int,int>m;
       for(int i=0;i<1000;i++)
       {
           m[i]=0;
       }
        // int temp[1000]=0;
        int count=0;
        for(int i=0;i<n;i++)
    {
        m[arr[i]]+=1;
    }
    
        for(int i=0;i<n;i++)
    {
        // temp[arr[i]]+=1;
        // if(arr[i]==k)
        // count++;
        
    int temp=k-arr[i];
    if(temp>0)
    if(m.find(temp)!=m.end())
       {
           count+=m[temp];
           if(k-arr[i]==arr[i])
           count--;
       } 
    }
    
        return count/2;
    }