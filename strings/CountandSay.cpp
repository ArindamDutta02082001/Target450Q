// link:https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1
string lookandsay(int n)
{
    if (n == 1)
        return "1";
    string ret = "1";
    int c = 1;
    for (int i = 2; i <= n; i++)
    {
        string t = "";
        ret += "&";
        for (int j = 1; j < ret.length(); j++)
        {
            if (ret[j] == ret[j - 1])
                c++;
            else
            {
                t += to_string(c);
                t += ret[j - 1];
                c = 1;
            }
        }
        ret = t;
    }
    return ret;
}