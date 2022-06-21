// link:https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)

    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if (M[a][b] == 1)
            s.push(b);

        else
            s.push(a);
    }
    int ans = s.top();

    int rcheck = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] == 0)
            rcheck++;
    }
    int ccheck = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1)
            ccheck++;
    }

    if (rcheck == n && ccheck == n - 1)
        return ans;
    else
        return -1;
    // code here
}