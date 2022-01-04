// link : https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/0/#
// PREORDER
vector<int> preOrder(Node *root)
{
    vector<int> v;

    stack<Node *> s;
    s.push(root);

    while (!s.empty())
    {
        Node *n = s.top();
        v.push_back(n->data);
        s.pop();

        if (n->right != NULL)
            s.push(n->right);
        if (n->left != NULL)
            s.push(n->left);
    }

    return v;
}

// link: https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/0/
// INORDER
vector<int> inOrder(Node *root)
{

    vector<int> v;
    stack<Node *> s;

    Node *n = root;

    while (n != NULL || !s.empty())
    {
        while (n != NULL)
        {
            s.push(n);
            n = n->left;
        }

        Node *t = s.top();
        s.pop();

        v.push_back(t->data);
        n = t->right;
    }
    return v;
}

// link : https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/0/#
// POSTORDER
// (using 2 stack. Here instead of 2 tack one vector and one stack is used since the return type of the function is vector)
vector<int> postOrder(Node *root)
{
    stack<Node *> s1;
    vector<int> v;
    s1.push(root);
    while (!s1.empty())
    {
        Node *n = s1.top();
        s1.pop();
        v.push_back(n->data);

        if (n->left != NULL)
            s1.push(n->left);
        if (n->right != NULL)
            s1.push(n->right);
    }
    reverse(v.begin(), v.end());
    return v;
}