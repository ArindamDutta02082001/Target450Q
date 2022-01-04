// link:https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *n = q.front();
        v.push_back(n->data);
        q.pop();
        if (n->right != NULL)
            q.push(n->right);
        if (n->left != NULL)
            q.push(n->left);
    }
    reverse(v.begin(), v.end());
    return v;
}