
// The level order traversal can be done usng 2 while lopp or a single while loop , but I will prefer to choose the 2 while loop method because
// this 2 while loop method is derived from the find max height of BT code.

// link:https://leetcode.com/problems/binary-tree-level-order-traversal/

// using 2 while loop (find max height code)
// ITERATIVE
vector<vector<int>> levelOrder(TreeNode *root)
{

    vector<vector<int>> v;
    if (root == NULL)
        return v;

    queue<TreeNode *> q;
    q.push(root);
    int count = 0;
    while (!q.empty())
    {
        count = q.size();
        vector<int> t; // taking tempoarry vecor as we require to return vector of vector
        while (count)
        {
            TreeNode *e = q.front();
            t.push_back(e->val);
            q.pop();
            if (e->left != NULL)
                q.push(e->left);
            if (e->right != NULL)
                q.push(e->right);
            count--;
        }
        v.push_back(t);
    }
    return v;
}

// link:https://practice.geeksforgeeks.org/problems/level-order-traversal/1
// using one while loop
// ITERATIVE
vector<int> levelOrder(Node *node)
{
    vector<int> v;
    queue<Node *> q;

    q.push(node);
    while (!q.empty())
    {
        Node *t = q.front();
        if (t->left != NULL)
            q.push(t->left);
        if (t->right != NULL)
            q.push(t->right);

        v.push_back(t->data);
        q.pop();
    }
    return v;
}