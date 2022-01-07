// link:https://leetcode.com/problems/binary-tree-level-order-traversal/
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
        vector<int> t;
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