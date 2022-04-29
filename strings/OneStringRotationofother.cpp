// link : https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

bool areRotations(string s1, string s2)
{
    string t = s1 + s1;
    if (s1.length() != s2.length())
        return 0;
    if (t.find(s2) != string::npos)
        return 1;
    else
        return 0;
    return 0;
    // Your code here
}