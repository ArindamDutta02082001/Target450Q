   int findLongestConseqSubseq(int arr[], int N)
    {
  
      set<int>s;
      int count=0;
      for(int i=0;i<N;i++)
      s.insert(arr[i]);
      
      for(int i=0;i<N;i++)
    
        {
            int j=arr[i];
            int t=arr[i];
            if(s.find(t-1)==s.end())
            {
                while(s.find(j)!=s.end())
                j++;
            }
            count=max(count,j-t);
        }
       return count; 
    }