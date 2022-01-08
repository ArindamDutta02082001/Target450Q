//  link:https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{

    vector<vector<int>> ret;
    if (root == NULL)
        return ret;
    deque<TreeNode *> q;

    q.push_back(root);
    int count = 0, dir = -1;

    while (!q.empty())
    {

        count = q.size();
        deque<TreeNode *> tempdq;
        vector<int> v;

        while (count)
        {
            TreeNode *t = q.front();
            v.push_back(t->val);
            if (dir == 1)
            {
                if (t->right != NULL)
                    tempdq.push_front(t->right);
                if (t->left != NULL)
                    tempdq.push_front(t->left);
            }
            else
            {
                if (t->left != NULL)
                    tempdq.push_front(t->left);
                if (t->right != NULL)
                    tempdq.push_front(t->right);
            }

            q.pop_front();
            count--;
        }

        q.insert(q.end(), tempdq.begin(), tempdq.end());
        ret.push_back(v);
        dir *= -1;
    }

    return ret;
}