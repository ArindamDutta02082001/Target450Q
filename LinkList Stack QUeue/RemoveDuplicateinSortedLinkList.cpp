// link:https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
// CODE LIBRARY
Node *removeDuplicates(Node *root)
{

    Node *head = root; // pointer lena important hai nhi toh main root ko change krenge toh link list chota padh jayega

    if (root == NULL)
        return NULL;

    while (head->next != NULL) // head !=NULL mt kr dena
    {
        if (head->data == head->next->data)
        {
            head->next = head->next->next;
        }
        else
            head = head->next;
    }
    return root;
}