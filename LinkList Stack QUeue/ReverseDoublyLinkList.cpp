// link:https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
// s1: take only onepointer i.e, cur pointer
// s2: store cur ka next (say in t1)
// s3: link cur ka next to cur ka prev
// s4: link cur ka prev to t1
// s5: move the cur pointer forward
Node *reverseDLL(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;

    Node *cur = head;
    Node *ret = NULL;
    while (cur != NULL)
    {
        Node *t1 = cur->next;
        //   Node * t2=cur->prev;
        cur->next = cur->prev;
        cur->prev = t1;
        //   pre=cur;
        ret = cur;
        cur = t1;
    }

    return ret;
    // Your code here
}