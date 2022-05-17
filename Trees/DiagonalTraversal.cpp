// link: https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1#
// s1:take a stack (for storing the root node values) and a vector v (where the node values are stored during right side iteration)
// s2: now pop the stack elements (root nodes of each diagonal) and then iterate and store the right node values in vector
// s3: do this until the stack gets empty and finally return v
vector<int> diagonal(Node *root)
{
    vector<int> v;
    if (root == NULL)
        return v;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *t = q.front();
        while (t != NULL)
        {
            v.push_back(t->data);
            if (t->left != NULL)
                q.push(t->left);
            t = t->right;
        }
        q.pop();
    }
    return v;
}