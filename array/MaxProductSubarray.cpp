 long long maxProduct(vector<int> arr, int n) {
    long long maxProd = 1; 
    long long minProd = 1; 
    long long ans = 0;
    for(int i =0 ; i<n ; i++){
        long long x = arr[i];
        if(x<0)
        swap(minProd , maxProd);
        maxProd = max(x , x*maxProd);
        minProd = min(x , x*minProd);
        ans = max(ans,maxProd);
        
    }
    return ans ;
	}