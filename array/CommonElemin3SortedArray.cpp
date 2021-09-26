
// *******error generating for very very very large inputs in gfg
#include <bits/stdc++.h>
using namespace std;
vector<int> commonElements(int[], int[], int[], int, int, int);

int main()
{
    // int a[] = {1, 5, 10, 20, 40, 80}, b[] = {6, 7, 20, 80, 100}, c[] = {3, 4, 15, 20, 30, 70, 80, 120};
    // cout<<"e";
    int a[] = {3, 3, 3}, b[] = {3, 3, 3}, c[] = {3, 3, 3};

    for (auto i : commonElements(a, b, c, 3, 3, 3))
        cout << i << " ";
    return 0;
}

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{

    set<int> t1;

    vector<int> t2;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (A[i] == B[j])
                t1.insert(A[i]);
        }
    }

    for (int i = 0; i < t1.size(); i++)
    {
        for (int j = 0; j < n3; j++)
        {
            if (*(t1.begin()) == C[j] && !t1.empty())
            {

                t2.push_back(C[j]);
                t1.erase(t1.begin());
            }
            if (t1.empty())
                break;
        }
    }

    return t2;
    //code here.
}