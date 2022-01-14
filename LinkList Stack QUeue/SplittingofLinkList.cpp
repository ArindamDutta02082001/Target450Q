// link:https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1
// m1: naive method
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *p1;
    Node *p2;
    Node *c = head;
    int l = 0;
    while (c->next != head)
    {
        c = c->next;
        l++;
    }
    p1 = head;
    int k = (l / 2);

    while (k)
    {
        p1 = p1->next;
        --k;
    }

    Node *t = p1->next;
    p1->next = head;
    c->next = t;
    *head1_ref = head;
    *head2_ref = t;
}

// m2: middle  element method by hare and tortoise
// to do