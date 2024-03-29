// link : https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/0/#
// PREORDER
//  1 stack and 1 vector is used
// s1: take stack s
// s2: push root
// s3: pop root and check if it has right and left . If it has then push right and left node
//     pop them and repeat same process to them
vector<int> preOrder(Node *root)
{
    vector<int> v;

    stack<Node *> s;
    s.push(root);

    while (!s.empty())
    {
        Node *n = s.top();
        v.push_back(n->data);
        s.pop();

        if (n->right != NULL)
            s.push(n->right);
        if (n->left != NULL)
            s.push(n->left);
    }

    return v;
}

// link: https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/0/
// INORDER
// only 1 stack and a Node Pointer (Node *) is used
// s1: using that pointer , check for the left node till it reaches null and push them into stack
// s2: upon reaching the null, now pop the top element from the stack and cout that data
// s3: then change the pointer to the right side node
vector<int> inOrder(Node *root)
{

    vector<int> v;
    stack<Node *> s;

    Node *n = root; // pointer pointing root

    while (n != NULL || !s.empty()) // while(true)
    {
        while (n != NULL)
        {
            s.push(n);
            n = n->left;
        }
                                      // if(s.empty())
                                      //  break;

        Node *t = s.top();

        v.push_back(t->data);
        n = t->right;
        s.pop();
    }
    return v;
}

// link : https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/0/#
// POSTORDER
// (using 2 stack. Here instead of 2 stack, here one vector and one stack is used since the return type of the function is vector)
vector<int> postOrder(Node *root)
{
    stack<Node *> s1;
    vector<int> v;
    s1.push(root);
    while (!s1.empty())
    {
        Node *n = s1.top();
        s1.pop();
        v.push_back(n->data);

        if (n->left != NULL)
            s1.push(n->left);
        if (n->right != NULL)
            s1.push(n->right);
    }
    reverse(v.begin(), v.end());
    return v;
}