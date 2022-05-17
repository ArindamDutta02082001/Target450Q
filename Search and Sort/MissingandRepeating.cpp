// link:https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
int *findTwoElement(int *arr, int n)
{
   
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] < 0)
        {
            a = abs(arr[i]);
            //   break;
        }
        else

            arr[abs(arr[i]) - 1] *= -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            b = i + 1;
            break;
        }
    }
    // int * ret=new int[2];
    int ret[2];
    int *p = ret;
    ret[0] = a;
    ret[1] = b;

    return p;
}