// link : https://practice.geeksforgeeks.org/problems/e015cb4d3f354b035d9665e7c8a54a7aefb1901b/1/
int checkRedundancy(string S)
{
    // code here
    stack<char> s;
    int flag = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != ')')
            s.push(S[i]);
        if (S[i] == ')')
        {

            while (s.top() != '(' && !s.empty())
            {
                if (s.top() == '*' || s.top() == '-' || s.top() == '+' || s.top() == '/')
                    flag = 1;
                s.pop();
            }

            s.pop();
            if (flag == 0)
                return 1;

            flag = 0;
        }
    }

    return 0;
}
// easy code below
int findMaxLen(string S)
{

    int count = 0;
    int lbra = 0, rbra = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '(')
            lbra++;
        if (S[i] == ')')
            rbra++;
        if (lbra == rbra)
            count = max(count, lbra + rbra);
        if (rbra > lbra)
        {
            lbra = 0;
            rbra = 0;
        }
    }
    lbra = 0;
    rbra = 0;
    for (int i = S.size() - 1; i >= 0; i--)
    {
        if (S[i] == '(')
            lbra++;
        if (S[i] == ')')
            rbra++;
        if (lbra == rbra)
            count = max(count, lbra + rbra);
        if (rbra < lbra)
        {
            lbra = 0;
            rbra = 0;
        }
    }
    return count;
}