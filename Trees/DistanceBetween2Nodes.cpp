// link:https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1#
// m1: find the lca (i.e Common point) in the path of the 2 nodes
// m2: find the height of 'a' from lca (common point) and 'b' from lca (common point)
// s3: now return h1+h2-2
class Solution
{
public:
    int height(Node *root, int v)
    {
        queue<Node *> q;
        q.push(root);
        int h = 0, f = 0;
        while (!q.empty())
        {

            h++;
            int count = q.size();
            while (count)
            {
                Node *t = q.front();
                if (t->data == v)
                {
                    f = 1;
                    break;
                }

                q.pop();
                if (t->left != NULL)
                    q.push(t->left);

                if (t->right != NULL)
                    q.push(t->right);

                count--;
            }
            if (f == 1)
                break;
        }
        return h;
    }

    Node *lca(Node *root, int n1, int n2)
    {
        if (root == NULL || root->data == n1 || root->data == n2)
            return root;

        Node *leftstorageofroot = lca(root->left, n1, n2);
        Node *rightstorageofroot = lca(root->right, n1, n2);

        if (leftstorageofroot == NULL)
            return rightstorageofroot;
        if (rightstorageofroot == NULL)
            return leftstorageofroot;
        else
            return root;
    }

    int findDist(Node *root, int a, int b)
    {

        if (root == NULL)
            return 0;

        Node *com = lca(root, a, b);

        return height(com, a) +
               height(com, b) - 2;
    }
};
