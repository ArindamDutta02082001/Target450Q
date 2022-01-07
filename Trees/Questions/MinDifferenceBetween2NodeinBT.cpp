// link:https://leetcode.com/problems/minimum-distance-between-bst-nodes/submissions/

int minDiffInBST(TreeNode *root)
{
    // level order traversal code
    if (root == NULL)
        return 0;
    vector<int> v;
    queue<TreeNode *> q;
    q.push(root);
    int nodecount = 0;
    while (!q.empty())
    {
        nodecount = q.size();
        while (nodecount)
        {
            TreeNode *t = q.front();
            v.push_back(t->val);
            if (t->left != NULL)
                q.push(t->left);
            if (t->right != NULL)
                q.push(t->right);
            q.pop();
            nodecount--;
        }
    }
    // all node values are extracted into the vector v
    // now just find the min diff between the element of the vectors

    sort(v.begin(), v.end());
    int maxidiff = 9999;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int j = i + 1;
        if (maxidiff > v[j] - v[i])
            maxidiff = v[j] - v[i];
    }

    // just to check if all the node values are extracted into the vector v
    //  for(auto i:v)
    //      cout<<i;
    return maxidiff;
}