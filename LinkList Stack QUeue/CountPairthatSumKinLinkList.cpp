
// m1: O(n^2)
// s1- sort the link list if unsorted
// s2: use 2 pointer approach to find the count of pair

Node *sorting(Node *h)
{
    Node *t = h;
    Node *min = NULL;
    Node *r = NULL;
    while (t)
    {
  mini=t;
        r = t->next;
        while (r)
        {
            if (r->data < t->data)
                min = r;
            r = r->next;
        }

        swap(min->data, t->data);
        t = t->next;
    }
    return h;
}

int findPair(Node *head, int k)
{
    head = sorting(head);
    int c = 0;
    Node *f = head;
    Node *l = head;

    while (l->next != NULL)
    {
        l = l->next;
    }

    while (l->next != f && f != l)
    {
        if (l->data + f->data == k)
        {
            c++;
            l = l->prev;
            f = f->next;
        }
        if (l->data + f->data > k)
            l = l->prev;
        if (l->data + f->data < k)
            f = f->next;
    }
    return c;
}

// m2:O(n)
// using map
// s1: use a while loop to map each elem occurance
// s2: use another while loop to check for each elem ,if (k-elem) is present in map or not