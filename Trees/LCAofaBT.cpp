// link:https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1#
// TAKE YOU FORWARD
//FEEL

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