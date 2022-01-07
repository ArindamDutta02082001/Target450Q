// link:https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

// m1:
class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    int func(Node *root)
    {
        if (root == NULL)
            return 0;
        int lh = func(root->left);
        int rh = func(root->right);
        if (abs(lh - rh) > 1)
        {

            c++;
        }
        return max(lh, rh) + 1;
    }
    int c = 0; // global Variable
    bool isBalanced(Node *root)
    {
        int x = func(root); // In x height of the BT will be stored
        if (c >= 1)
            return false;

        return true;
    }
};

// m2:
class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    int func(Node *root)
    {
        if (root == NULL)
            return 0;
        int lh = func(root->left);
        int rh = func(root->right);
        if (abs(lh - rh) > 1)
        {

            ret = false;
            return 0;
        }
        return max(lh, rh) + 1;
    }

    bool ret = true; // global Variable
    bool isBalanced(Node *root)
    {
        int x = func(root); // In x height of the BT will be stored

        if (ret == false)
            return false;
        return true;
    }
};