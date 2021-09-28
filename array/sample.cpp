
// #include<bits/stdc++.h>
// using namespace std;
// int check(int [],int ,int );

// int main()
// {
//     int arr[]={1,2,4,6,8,12,45},k=20;
//     cout<<check(arr,6,k);
//     return 0;
// }


// int check(int A[],int n,int t){
//     int p1=0,p2=n-1,Marko=0;
//                int s=A[p1]+A[p2];
// while(p1<p2)
//             {
//                 if(s>t){
//                 s=s-A[p2];
//                 p2=p2-1;
//                 s+=A[p2];
                
//                 // p2--;
//                 }
//                 if(s<t)
//                 {
//                  s=s-A[p1];
//                 p1=p1+1;
//                 s+=A[p1];
//                 // p1++;
//                 }
//                 if(s==t)
//                 {
//                 //  mark=1;
//                 cout<<A[p1]<<"  "<<A[p2]<<" ";
//                 Marko=1;
//                  break;
//                 }
//             }
//  if(Marko==1)
//         return 1;
//         return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=50,tar=182,mark=1;
    int arr[]={589 ,343 ,609 ,61 ,222, 759, 955, 889 ,147 ,691 ,950, 844 ,431, 621, 749 ,68 ,537, 784 ,36 ,227 ,186, 39, 854, 630 ,225 ,749 ,924, 360, 258 ,767 ,945, 956, 319, 727 ,412 ,26 ,356 ,2 ,550 ,497 ,585, 516 ,965 ,343, 76, 914, 143 ,197, 949 ,73};
//    sort(arr,arr+50);
//    for(int i=0;i<50;i++)
//    cout<<arr[i]<<",";
   for(int i=0;i<=n-3;i++)
   {
       for(int j=0;j<=n-2;j++)
       {
           for(int k=0;k<=n-1;k++)
           {
               if(arr[i]+arr[j]+arr[k]==tar)
               {
                //    cout<<i<<" "<<j<<" "<<k;
                    mark=0;
                   break;
               }
               if(mark==0)
               break;
           }
        if(mark==0)
               break;
       }
   }
    return 0;
}