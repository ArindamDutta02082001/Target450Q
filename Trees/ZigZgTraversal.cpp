//  link:https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/

vector<int> zigZagTraversal(Node *root)
{

    int ord = 1;
    vector<int> rt;
    queue<Node *> q;

    if (root == NULL)
        return rt;

    q.push(root);
    while (!q.empty())
    {

        int count = q.size();
        vector<int> temp;
        while (count)
        {
            Node *t = q.front();
            temp.push_back(t->data);
            if (t->left != NULL)
                q.push(t->left);
            if (t->right != NULL)
                q.push(t->right);
            q.pop();
            count--;
        }

        if (ord == 1)
            rt.insert(rt.end(), temp.begin(), temp.end());
        else
        {
            reverse(temp.begin(), temp.end());
            rt.insert(rt.end(), temp.begin(), temp.end());
        }
        ord *= -1;
    }
    return rt;
}