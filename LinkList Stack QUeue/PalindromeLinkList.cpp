// link:https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

// m1: reverse the link list  and then check with the prev one

// m2:
// s1: find middle node and from that node reverse the link list till the end
// s2: take 2 pointer m1 , m2 and traverse the linklist till (m2!=NULL) and check if the datas from both the end are same

class Solution
{
public:
    Node *reverseL(Node *head)
    {
        Node *prev = NULL;
        Node *cur = head;
        while (cur != NULL)
        {
            Node *t = cur->next;
            cur->next = prev;
            prev = cur;
            cur = t;
        }
        return prev;
    }

    bool isPalindrome(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        Node *m1 = head;
        Node *m2 = reverseL(slow);

        while (m2 != NULL)
        {
            if (m1->data != m2->data)
                return false;
            m1 = m1->next;
            m2 = m2->next;
        }

        return true;
    }
};
