// *******without stack single iteration********
bool ispar(string x)
{
    // Your code here
    int cur = 0, sim = 0, sq = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '{')
            cur++;
        if (x[i] == '(')
            sim++;
        if (x[i] == '[')
            sq++;
        if (x[i] == '}')
            --cur;
        if (x[i] == ')')
            --sim;

        if (x[i] == ']')
            --sq;
    }
    if (cur == 0 && sim == 0 && sq == 0)
        return true;
    else
        return false;
}

// **********with stack to do********