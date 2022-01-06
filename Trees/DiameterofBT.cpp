// link :https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution
{
public:
    int heightfunc(Node *root)
    {
        if (root == NULL)
            return 0;
        int lh = heightfunc(root->left);
        int rh = heightfunc(root->right);
        d = max(d, lh + rh + 1);
        return (max(lh, rh) + 1);
    }
    int d = 0; // global
    int diameter(Node *root)
    {
        int x = heightfunc(root); // in te x the max height of the tree is returned
        return d;                 // if the diameter definition is the count of no of edges in the longest path then we should return (d-1)
                                  // if the diameter definition is the count of no of nodes in the longest path then we should return (d)
    }
};
