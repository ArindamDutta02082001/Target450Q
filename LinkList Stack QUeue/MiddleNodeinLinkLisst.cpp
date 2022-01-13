// link:https://leetcode.com/problems/middle-of-the-linked-list/submissions/

// m1: Normal
ListNode *middleNode(ListNode *head)
{

    ListNode *t = head;
    int l = 0;

    while (t != NULL)
    {
        t = t->next;
        l++;
    }

    l = (l) / 2;

    t = head;

    while (l)
    {

        t = t->next;
        l--;
    }

    return t;
}

// m2: Hare and Tortoise
// move the hare pointer to the last the tortoise pointer will come automatically to th middle
ListNode *middleNode(ListNode *head)
{

    ListNode *p1 = head;
    ListNode *p2 = head;

    while (p2 != NULL && p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
    }

    return p1;
}