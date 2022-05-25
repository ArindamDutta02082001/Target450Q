//    link:https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#
   int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        
       int ret=arr[n-1]-arr[0];
       for(int i=0;i<n-1;i++)
       {
           int maxi=max( arr[n-1]-k,arr[i]+k);
           if(arr[i+1]-k<0)
           continue;
           int mini=min(arr[0]+k,arr[i+1]-k);
           ret=min(ret,(maxi-mini));
           
       }
        return ret;
        
    }