// link:https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1#
string removeDuplicates(string s)
{
    unordered_map<char, int> m; // you have to use unordered else time complexity xceed
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]] == 0)
            str += s[i];

        m[s[i]]++;
    }

    return str;
}