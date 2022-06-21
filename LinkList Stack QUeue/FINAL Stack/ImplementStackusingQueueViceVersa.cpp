// IMPLEMENT STACK USING QUEUE
// LINK:https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1

// QUEUE q1 and q2 is already defined before
// Function to push an element into stack using two queues.
void QueueStack ::push(int x)
{
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while (!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
    if (!q1.empty())
    {
        int t = q1.front();
        q1.pop();
        return t;
    }
    else
        return -1;
}