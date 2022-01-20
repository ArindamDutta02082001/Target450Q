// link:https://www.geeksforgeeks.org/sort-k-sorted-doubly-linked-list/
struct Node *sorting(struct Node *head)
{
    struct Node *t = head;
    struct Node *r = NULL;
    while (t)
    {
        Node *min = t;
        r = t->next;
        while (r)
        {
            if (r->data < min->data)
                min = r;
            r = r->next;
        }
        swap(t->data, min->data);
        t = t->next;
    }
    return head;
}
// function to sort a k sorted doubly linked list
struct Node *sortAKSortedDLL(struct Node *head, int k)
{
    if (head == NULL)
        return NULL;

    struct Node *t = head;

    while (k)
    {

        t = t->next;
        k--;
    }
    struct Node *an = t->next;
    t->next = NULL;
    an = sorting(an);
    head = sorting(head);
    struct Node *j = head;
    while (j->next != NULL)
    {
        j = j->next;
    }
    j->next = an;
    return head;
}