// link : https : // practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
void removeLoop(Node *head)
{
    Node *p1 = head; // low
    Node *p2 = head; // high
    int k = 0;
    while (p2 != NULL && p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
        if (p1 == p2)
        {
            k = 1;
            break;
        }
    }
    if (k == 1) // loop detected
    {
        if (p2 != head)
        {
            p1 = head;
            while (p2->next != p1->next)
            {
                p1 = p1->next;
                p2 = p2->next;
            }
            p2->next = NULL;
            return;
        }
        else // base condition if the loop formed by joining the last element with the first element
        {
            Node *t = head;
            while (t->next != head)
            {
                t = t->next;
            }
            t->next = NULL;
        }
    }
    else
        return;
}