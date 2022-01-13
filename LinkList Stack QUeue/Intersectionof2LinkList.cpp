// link:https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

int intersectPoint(Node *head1, Node *head2)
{

    Node *p1 = head1;
    Node *p2 = head2;

    int c1 = 0, c2 = 0;
    while (p1 != NULL)
    {
        p1 = p1->next;
        c1++;
    }
    while (p2 != NULL)
    {
        p2 = p2->next;
        c2++;
    }
    p1 = head1;
    p2 = head2;
    int dif = abs(c1 - c2);
    if (c1 > c2)
    {
        while (dif)
        {
            p1 = p1->next;

            dif--;
        }
    }
    else
    {
        while (dif)
        {
            p2 = p2->next;

            dif--;
        }
    }

    while (p1 != NULL)
    {
        if (p1 == p2)
            return p1->data;
        p1 = p1->next;
        p2 = p2->next;
    }

    return -1;
}