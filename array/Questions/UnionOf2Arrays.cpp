int doUnion(int a[], int n, int b[], int m)
{

    int temp[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        temp[a[i]] += 1;
    }
    for (int j = 0; j < m; j++)
    {
        temp[b[j]] += 1;
    }
    int k = 0;
    for (int i = 0; i < 100000; i++)
    {
        if (temp[i] >= 1)
            k++;
    }

    return k;
   
}