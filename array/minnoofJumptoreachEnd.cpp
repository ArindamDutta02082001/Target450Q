 int minJumps(int arr[], int n){
        // Your code here
        
        int t=0;
        int jump=1,i=arr[0];
        if(i==0)
        return -1;
        while(i<n)
        {
           
           jump++;
           int k=findmax(arr,t+1,i);
           if(k==0 )
           {
               jump=-1;
               break;
           }
           if(k==1)
           {
             t=i;
        //   i=i+k;  
           }
           if(k!=1){
           t=i;
           i=i+k;
           }
  
           
           
        }
        if(jump<1000)
        return jump;
        else
        return -1;
    }