// link:https://www.geeksforgeeks.org/find-largest-subtree-sum-tree/

// do it in editor
// concept used the same as sum tree
int ans = -999;

int findLargestSubtreeSumUtil(Node *root)
{

    if (root == NULL)
        return 0;

    int oldval = root->key;
    root->key = findLargestSubtreeSumUtil(root->left) + findLargestSubtreeSumUtil(root->right) + oldval;

    ans = max(ans, root->key);

    return root->key;
}

int findLargestSubtreeSum(Node *root)
{

    if (root == NULL)
        return 0;

    findLargestSubtreeSumUtil(root);

    return ans;
}