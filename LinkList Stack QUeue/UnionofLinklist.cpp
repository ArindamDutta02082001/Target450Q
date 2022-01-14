
//  link:https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1

Node *removeDuplicates(Node *head)
{

    // Node * ptr=head;
    if (head == NULL)
    {
        return NULL;
    }
    map<int, int> m;

    Node *p1 = head;
    Node *p2 = head->next;
    m[p1->data] = 1;
    while (p2 != NULL)
    {
        if (m[p2->data] == 1)
        {
            p1->next = p2->next;
            // free(p2);
            p2 = p2->next;
        }
        else
        {
            m[p2->data] = 1;
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    // your code goes here
    return head;
}

Node *sorting(Node *head)
{
    Node *temp = head;

    // Traverse the List
    while (temp)
    {
        Node *min = temp; // temp var
        Node *r = temp->next;

        // Traverse the unsorted sublist
        while (r)
        {
            if (min->data > r->data)
                min = r;

            r = r->next;
        }

        // Swap Data
        int x = temp->data;
        temp->data = min->data;
        min->data = x;
        temp = temp->next;
    }
    return head;
}

struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
    Node *n = head1;
    while (n->next != NULL)
    {
        n = n->next;
    }
    n->next = head2;

    head1 = removeDuplicates(head1);

    head1 = sorting(head1);
    return head1;

    // code here
}
