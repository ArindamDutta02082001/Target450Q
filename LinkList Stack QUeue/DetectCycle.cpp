// link:https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;
    Node *p1 = head;
    Node *p2 = head;
    while (p2->next != NULL && p2 != NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
        if (p1 == p2)
            return true;
    }
    return false;
}