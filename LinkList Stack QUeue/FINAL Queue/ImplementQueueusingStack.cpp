
// link:https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1
// two stacks given previously

// Function to push an element in queue by using 2 stacks.
void StackQueue ::push(int x)
{
    s1.push(x);
}

// Function to pop an element from queue by using 2 stacks.
int StackQueue ::pop()
{
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    int t = 0;
    if (!s2.empty())
    {
        t = s2.top();
        s2.pop();
    }
    else
        t = -1;

    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return t;
}