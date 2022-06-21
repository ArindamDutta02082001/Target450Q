// https://practice.geeksforgeeks.org/problems/check-if-all-levels-of-two-trees-are-anagrams-or-not/1/#
int compLevel(Node *r1, Node *r2)
{
    queue<Node *> v1, v2;
    v1.push(r1);
    v2.push(r2);

    // int nodec=0;
    while (!v1.empty())
    {
        int nodec = v1.size();
        // int i=nodec;
        vector<int> temp1, temp2;
        while (nodec--)
        {
            Node *t1 = v1.front();
            Node *t2 = v2.front();

            temp1.push_back(t1->data);
            temp2.push_back(t2->data);

            if (t1->left != NULL)
                v1.push(t1->left);
            if (t1->right != NULL)
                v1.push(t1->right);
            if (t2->left != NULL)
                v2.push(t2->left);
            if (t2->right != NULL)
                v2.push(t2->right);
            v1.pop();
            v2.pop();
        }
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        if (temp1 != temp2)
            return 0;
    }
    return 1;
}

int countNode(Node *n)
{
    if (n == NULL)
        return 0;

    return 1 + countNode(n->left) + countNode(n->right);
}

bool areAnagrams(Node *root1, Node *root2)
{
    if (countNode(root1) == countNode(root2))
        return compLevel(root1, root2);
    else
        return 0;
}