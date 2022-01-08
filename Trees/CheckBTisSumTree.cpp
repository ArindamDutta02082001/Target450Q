//  link:https://practice.geeksforgeeks.org/problems/sum-tree/1#
int sumNodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;

    int oldval = root->data;
    root->data = sumNodes(root->left) + sumNodes(root->right);
    if (root->data != oldval)
        ret = false;
    return oldval + root->data;
}

bool isSumTree(Node *root)
{
    sumNodes(root);

    if (ret == false)
        return false;
    else
        return true;

    // Your code here
}