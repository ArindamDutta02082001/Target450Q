// link: https://practice.geeksforgeeks.org/problems/mirror-tree/1

// CREATING A MIRROR TREE OF A BINARY TREE
// m1: using 2 while loop ( same code we used in level order traversal)
void mirror(Node *node)
{
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        int count = q.size();
        while (count)
        {

            Node *n = q.front();
            swap(n->left, n->right);
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
            count--;
            q.pop();
        }
    }
}

// m2: using 1 while loop ( as we can do level order traversal in single while loop also REMEMBER)
void mirror(Node *node)
{
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {

        Node *n = q.front();
        swap(n->left, n->right);
        if (n->left != NULL)
            q.push(n->left);
        if (n->right != NULL)
            q.push(n->right);

        q.pop();
    }
}

// USING RECURSION
// m3: using the recursion we just shift the entire left subtree with the entire right subtree (mind it , not left node with right node) of All nodes
void mirror(Node *node)
{
    if (node == NULL)
        return;
    mirror(node->left);
    mirror(node->right);
    swap(node->left, node->right);
}

// CHECK IF TREE 2 IS MIRROR TREE OF TREE 1 //
// s1: find inorder traversal of tree1 in v1 and tree2 in v2
// s2: reverse any one vector and check if the two vectors are same
class Solution
{
public:
    vector<int> v1, v2;
    void inorder1(TreeNode *n)
    {
        if (n == NULL)
            return;
        inorder1(n->left);
        v1.push_back(n->val);
        inorder1(n->right);
    }
    void inorder2(TreeNode *n)
    {
        if (n == NULL)
            return;
        inorder2(n->left);
        v2.push_back(n->val);
        inorder2(n->right);
    }

    bool isSymmetric(TreeNode *root1, TreeNode *root2)
    {

        if (root1 == NULL && root2 == NULL)
            return 1;
        if ((root1 != NULL && root2 == NULL) || (root1 == NULL && root2 != NULL))
            return 0;

        inorder1(root1);
        inorder2(root2);
        reverse(v2.begin(), v2.end());
        if (v1 == v2)
            return true;
        else
            return false;
    }
};