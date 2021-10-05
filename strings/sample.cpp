#include <bits/stdc++.h>
using namespace std;
string S = "abcanj";
int R = S.length();
bool isPalin(string, int l = 0, int r = R);
int func(char *);

int main()
{
    char s[] = "1A0";
    // string t="5AB6";
    // sort(t.begin(),t.end());
    // cout<<t;
    // return 0;
    // string S = "abcanj";
    // cout << isPalin(S);
    cout << func(s);
    return 0;
}
bool isPalin(string s, int l, int r)
{

    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPalin(s, l + 1, r - 1);
}

int func(char *str)
{

    // char *p=str;
    int b = ((int)(*str)) - 48;
    str++;
    while (*str != '\0')
    {
        if (isalpha(*str))
        {
            char t = *str;
            str++;
            switch (t)
            {
            case 'A':
            {
                int c = ((int)(*str)) - 48;
                b = b & c;
            }
            break;
            case 'B':
            {
                int c = ((int)(*str)) - 48;
                b = b | c;
            }
            break;
            case 'C':
            {
                int c = ((int)(*str)) - 48;
                b = b ^ c;
            }
            break;
            }
            str++;
        }
    }
    // cout<<str;
    return b;
}