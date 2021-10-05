void merge(int arr1[], int arr2[], int n, int m)
{

    //  issme tle waah	jo mergesort use krke kia
    //int temp[m+n]={0};
    //int k=0,p1=0,p2=0;
    //while(p1<n && p2<m)
    //{
    //    if(arr1[p1]<arr2[p2])
    //    {
    //        temp[k]=arr1[p1];
    //        p1++;
    //        k++;
    //    }

    //    if(arr1[p1]>arr2[p2])
    //    {
    //        temp[k]=arr2[p2];
    //        p2++;
    //        k++;
    //    }

    //}
    //if(p1!=n)
    //while(p1<n)
    //{
    //      temp[k]=arr1[p1];
    //        p1++;
    //        k++;
    //}

    //   if(p2!=m)
    //while(p2<m)
    //{
    //      temp[k]=arr2[p2];
    //        p2++;
    //        k++;
    //}

    //int x=0;
    //for(int i=0;i<m+n;i++)
    //{
    //    if(i<n)
    //    arr1[i]=temp[i];
    //    if(i>=n && i<m+n){
    //    arr2[x]=temp[i];
    //    x++;

    //    }

    //}

    // issme no tle jo bruteforce se kiya tha
    int temp[m + n] = {0};
    int x = 0;
    for (int i = 0; i < m + n; i++)
    {
        if (i < n)
            temp[i] = arr1[i];
        if (i >= n && i < m + n)
        {
            temp[i] = arr2[x];
            x++;
        }
    }
    sort(temp, temp + (m + n));
    x = 0;
    for (int i = 0; i < m + n; i++)
    {
        if (i < n)
            arr1[i] = temp[i];
        if (i >= n && i < m + n)
        {
            arr2[x] = temp[i];
            x++;
        }
    }
}