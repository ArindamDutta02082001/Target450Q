// link:https://practice.geeksforgeeks.org/problems/merge-sort/1/#
void merge(int arr[], int l, int mid, int r)
{

    // int size=(float)sizeof(arr)/(float)sizeof(arr[0]);
    //     int le = l ;
    //     int re = r ;
    //     int me = mid ;
    //     cout<<le<<" , "<<re<<" "<<me<<endl;
    //  for(int i=0;i<r-l+1;i++)
    //  {
    //      cout<<arr[i]<<" " ;
    //  }
    //  cout<<endl;

    int i = l;
    // int k=0;
    int j = mid + 1;
    vector<int> arr2;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            arr2.push_back(arr[i]);
            i++;
        }
        else
        {
            arr2.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        arr2.push_back(arr[i]);
        i++;
    }
    while (j <= r)
    {
        arr2.push_back(arr[j]);
        j++;
    }

    //  for(int i=0;i<arr2.size();i++)
    //  {
    //  arr[l+i]=arr2[i] ;
    // //  cout<<arr2[i]<<" " ;

    //  }
    int k = 0;
    for (int i = l; i <= r; i++) // IMPORTANT
    {
        arr[i] = arr2[k++];
    }

    //  for(int i=0;i<arr2.size();i++)
    //  {
    //     cout<<arr[i]<<" " ;

    //  }

    //  cout<<endl<<endl;

    // Your code here
}

void mergesort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        //      cout<<l<<" , "<<r<<endl;
        // for(int i=l;i<=r;i++)
        //  {
        //     cout<<arr[i]<<" " ;
        //  }
        //  cout<<endl<<endl;

        merge(arr, l, mid, r);

        // cout<<l<<" , "<<r<<endl;
        // for(int i=l;i<=r;i++)
        //  {
        //     cout<<arr[i]<<" " ;
        //  }
        //  cout<<endl<<endl;
    }
}

public:
void mergeSort(int arr[], int l, int r)
{

    int mid = l + (r - l) / 2;
    mergesort(arr, l, r);
    // code here
}