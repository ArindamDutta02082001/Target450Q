// link : https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
vector<int> factorial(int N)
{
    vector<int> v;
    int c = 0;
    v.push_back(1);
    int size = 1, fact = 2;
    while (fact <= N)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            int temp = v[i] * fact + c;
            v[i] = temp % 10;
            c = temp / 10;
        }
        while (c != 0)
        {
            v.insert(v.begin(), c % 10);
            c = c / 10;
            size++;
        }
        fact++;
    }
    return v;
}