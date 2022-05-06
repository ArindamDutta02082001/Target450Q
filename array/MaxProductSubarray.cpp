//  long long maxProduct(vector<int> arr, int n) {
//     long long maxProd = 1; 
//     long long minProd = 1; 
//     long long ans = 0;
//     for(int i =0 ; i<n ; i++){
//         long long x = arr[i];
//         if(x<0)
//         swap(minProd , maxProd);
//         maxProd = max(x , x*maxProd);
//         minProd = min(x , x*minProd);
//         ans = max(ans,maxProd);
        
//     }
//     return ans ;
// 	}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maxp=-999;
    int a[]={11,2,-4,5};
    for(int i=0;i<4;i++){
        int p=1;
    for(int j=i;j<4;j++)
    {
        p*=a[j];
        if(p>=maxp)
        maxp=p;
        
    }
    }
    cout<<maxp;
    return 0;}