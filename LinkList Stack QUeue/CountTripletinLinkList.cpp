// link:https://www.geeksforgeeks.org/count-triplets-sorted-doubly-linked-list-whose-sum-equal-given-value-x/
int countTriplets(struct Node *head, int x)
{
    struct Node *t = head;
    int c = 0;

    struct Node *l = head;
    while (l->next != NULL)
    {
        l = l->next;
    }

    while (t->next != NULL)
    {
        int k = x - t->data;
        struct Node *p1 = t->next;
        struct Node *p2 = l;
        while (p2->next != p1 && p2 != p1)
        {
            if (p1->data + p2->data == k)
            {
                p1 = p1->next;
                p2 = p2->prev;
                c++;
            }
            if (p1->data + p2->data < k)
                p1 = p1->next;
            else
                p2 = p2->prev;
        }
        t = t->next;
    }
    return c;
}