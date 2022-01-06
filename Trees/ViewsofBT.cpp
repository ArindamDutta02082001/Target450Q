// link : https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
// LEFT VIEW
// s1: height code is copied only line 17 is added
vector<int> leftView(Node *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {

        v.push_back(q.front()->data); // inserting only the left most node in vector v
        nodecount = q.size();

        while (nodecount)
        {
            Node *n = q.front();
            q.pop();
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
            nodecount--;
        }
    }
    return v;
}

// link: https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
// RIGHT VIEW
// s1:  height code is copied only line 52 and (58 - 61) is added
vector<int> rightView(Node *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {

        v.push_back(q.front()->data); // inserting only the right most node in vector v
        height++;
        nodecount = q.size();

        while (nodecount)
        {
            Node *n = q.front();
            q.pop();
            if (n->right != NULL)
                q.push(n->right);
            if (n->left != NULL)
                q.push(n->left);

            nodecount--;
        }
    }
    return v;
}



// To do
// top bottom view