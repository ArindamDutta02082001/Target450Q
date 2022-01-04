//link :  https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1


// by me in O(N^2)
 long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        
        int count=0,zc=0,oc=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            oc++;
            if(arr[i]==0)
            zc++;
            for(int j=i+1;j<n;j++)
            {
    
            if(arr[j]==1)
            oc++;
            if(arr[j]==0)
            zc++;   
            
            if(oc==zc)
            count++;
            }
            oc=0;
            zc=0;
        }
        return count;
        
    }


    // in O(N)
    