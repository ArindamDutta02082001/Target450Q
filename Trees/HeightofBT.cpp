// ***********************MAX HEIGHT***************
//   ITERATIVE
// s1: take a queue push the root
// s2: initialize height and countnode =0
// s3: start a while loop inside which increment the height variable & initialize countnode to the size of the queue, and inside that start another while loop
//     while(coutnode--) , pop the elements (node) from the queue, and check if there is left and right node for the popped element;

int height(struct Node *root)
{

    if (root == NULL)
        return 0;

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {

        height++;
        nodecount = q.size();

        while (nodecount)
        {
            Node *n = q.front();
            q.pop();
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
            nodecount--;
        }
    }
    return height;
}

// RECURSION
int height(struct Node *root)
{
    if (root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    if (lh >= rh)
        return lh + 1;
    else
        return rh + 1;
}

// ***********************MIN HEIGHT***************

// link:https://leetcode.com/problems/minimum-depth-of-binary-tree/

int height(struct Node *root)
{

    if (root == NULL)
        return 0;

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {

        height++;
        nodecount = q.size();

        while (nodecount)
        {
            Node *n = q.front();
            if (n->left == NULL && n->right == NULL)
                return height;
            q.pop();
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
            nodecount--;
        }
    }
    return height;
}