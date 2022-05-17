// link:https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
// m1:
int majorityElement(int a[], int size)
{

    if (size == 1)
        return a[0];
    sort(a, a + size);
    int count = 1, finalcou = 0, ele = 0, starte = a[0];
    for (int i = 1; i < size; i++)
    {
        if (starte == a[i])
            count++;
        else
        {
            count = 1;
            starte = a[i];
        }
        if (count > finalcou)
        {
            finalcou = count;
            ele = a[i];
        }
    }
    if (finalcou > (size / 2))
        return ele;
    else
        return -1;
}

// m2: morre voting algo
int majorityElement(int a[], int size)
{
    map<int, int> m;
    int c = 1, e = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] == e)
            c++;
        else
            c--;
        if (c == 0)
        {
            c = 1;
            e = a[i];
        }
    }

    int c1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == e)
            c1++;
    }

    if (c1 > (size / 2))
        return e;
    else
        return -1;
}
