// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
// of maximum substrings str
// can be divided into
int maxSubStr(string str, int n)
{

    int z = 0, o = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            z++;
        if (str[i] == '1')
            o++;
        if (z == o)
        {
            c++;
            z = 0;
            o = 0;
        }
    }
    return c;
}

// Driver code
int main()
{
    string str = "0100110101";
    int n = str.length();

    cout << maxSubStr(str, n);

    return 0;
}

// the above code will be implementes and work properly with string str = "0100110101", where
// there are consequtive substrings

// but what happens when there is string str = "01000110101", here the output should be 3 (see that last 3 substrings are balanced)
// but the above code will give output 1