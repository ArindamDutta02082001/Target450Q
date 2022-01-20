// link:https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

// ITERATIVE

struct Node *reverseList(struct Node *head)
{
    Node *prev = NULL;
    Node *cur = head;

    while (cur != NULL)
    {
        Node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }

    return prev;
}

// RECURSIVE

struct Node *reverseList(struct Node *head)
{
    if (head->next == NULL)
        return head;
    Node *n = reverseList(head->next);
    // ***********
    Node *hn = head->next;
    hn->next = head;
    // ************
    // or
    // ************
    //  head->next->next=head;
    //  ***********
    head->next = NULL;
    return n;
}