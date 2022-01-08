// link: https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1

// see code library

int maxi=-999;
int sumNodes(Node *node)
{
    // sum=0;
    if (node == NULL)
        return 0;

    int oldval = node->data;
    node->data = sumNodes(node->left) + sumNodes(node->right);
    if(maxi<node->data)
    maxi=node->data;

    return node->data + oldval;
}
void toSumTree(Node *node)
{
    if (node == NULL)
        return;
    // sum=0;
    // node->data=sumNodes(node);
    sumNodes(node);
    // toSumTree(node->right);
return maxi;
    // Your code here
}