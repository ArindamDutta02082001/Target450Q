//TLE
//  vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
//         sort(arr.begin(),arr.end());
//         set<vector<int>>s;
//         for(int i=0;i<arr.size();i++)
//         {
//             for(int j=i+1;j<arr.size()-1;j++)
//             {
//                 int l=j+1;
//                 int r=arr.size()-1;
//                 while(l<r)
//                 {
//                     if((arr[i]+arr[j]+arr[l]+arr[r])==k)
//                     {
//                         vector<int> v;
//                         v.push_back(arr[i]);
//                         v.push_back(arr[j]);
//                         v.push_back(arr[l]);
//                         v.push_back(arr[r]);
//                         s.insert(v);
//                     }
//                 }
//             }
//         }
        
//         vector<vector<int>>V;
//         for(auto i:s)
//         V.push_back(i);
        
//         return V;
//     }

