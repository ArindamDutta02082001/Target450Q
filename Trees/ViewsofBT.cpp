// link : https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
// LEFT VIEW
// s1: height code is copied only line 17 is added
vector<int> leftView(Node *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {

        v.push_back(q.front()->data); // inserting only the left most node in vector v
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
    return v;
}

// link: https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
// RIGHT VIEW
// s1:  height code is copied only line 52 and (58 - 61) is added
vector<int> rightView(Node *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    queue<Node *> q;
    q.push(root);
    int height = 0, nodecount = 0;

    while (!q.empty())
    {

        v.push_back(q.front()->data); // inserting only the right most node in vector v
        height++;
        nodecount = q.size();

        while (nodecount)
        {
            Node *n = q.front();
            q.pop();
            if (n->right != NULL)
                q.push(n->right);
            if (n->left != NULL)
                q.push(n->left);

            nodecount--;
        }
    }
    return v;
}

// link: https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1#
// TOP VIEW
// s1: using map and a queue . Here vertical level ordering is done . the final content in he map is the ans
// s2 : if in the map element is present,  corresponding to the index we dont OVERWRITE the element
vector<int> topView(Node *root)
{

    map<int, int> m;

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *temp = q.front().first;
        int tempn = q.front().second;
        if (!m[tempn])
            m[tempn] = temp->data;
        if (temp->left != NULL)
            q.push({temp->left, tempn - 1});
        if (temp->right != NULL)
            q.push({temp->right, tempn + 1});
        q.pop();
    }

    vector<int> ret;
    for (auto i : m)
        ret.push_back(i.second);
    return ret;
}

// link: https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
// BOTTOM VIEW
// s1: using map and a queue . Here vertical level ordering is done . the final content in he map is the ans
// s2 : if in the map element is present,  corresponding to the index we  OVERWRITE the element
vector<int> bottomView(Node *root)
{
    // Your Code Here

    map<int, int> m;

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *temp = q.front().first;
        int tempn = q.front().second;
        // if(!m[tempn])
        m[tempn] = temp->data;
        if (temp->left != NULL)
            q.push({temp->left, tempn - 1});
        if (temp->right != NULL)
            q.push({temp->right, tempn + 1});
        q.pop();
    }

    vector<int> ret;
    for (auto i : m)
        ret.push_back(i.second);
    return ret;
}