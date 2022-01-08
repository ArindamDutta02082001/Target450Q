// link:https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1#
// CONCEPT Required: In level order traversal we can extract leaf nodes in level wise but in recursive traversal we can extract leaf nodes in left to right preserved order

// s1: simple use recursion to extract the leaf nodes of tree1 in vector v1
// s2: simple use recursion to extract the leaf nodes of tree2 in vector v2
// s3: now compare v1==v2 return true else return false

class Solution
{
public:
    vector<int> v1, v2;
    void CollNode1(TreeNode *root)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
            v1.push_back(root->val);
        CollNode1(root->left);
        CollNode1(root->right);
    }
    void CollNode2(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
            v2.push_back(root->val);
        CollNode2(root->left);
        CollNode2(root->right);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {

        if (!root1 && !root2)
            return true;
        if ((root1 == NULL && root2 != NULL) || (root2 == NULL && root1 != NULL))
            return false;
        CollNode1(root1);
        CollNode2(root2);
        if (v1 == v2)
            return true;
        else
    }
};
