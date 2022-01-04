//   ITERATIVE
// s1: take a queue push the root
// s2: initialize height and countnode =0
// s3: start a while loop inside which increment the height variable & initialize countnode to the size of the queue, and inside that start another while loop
//     while(coutnode--) , pop the elements (node) from the queue, and check if there is left and right node for the popped element;

int height(struct Node *root)
{

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {
        Node *n = q.front();

        height++;
        nodecount = q.size();

        while (nodecount)
        {
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
            q.pop();
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

    if (lh > rh)
        return lh + 1;
    else
        return rh + 1;
}