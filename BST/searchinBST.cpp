// link:https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1#

// OPTIMIZED
//  bool c=false;
//  void ser(Node* root,int x)
//  {
//      if(root==NULL)
//      return;

//         if(root->data==x)
//         {
//             c=true;
//             return;
//         }
//     if(root->data<x)
//     ser(root->right,x);
//     if(root->data>x)
//     ser(root->left,x);

// }

bool c = false;
void ser(Node *root, int x)
{
    if (root == NULL)
        return;

    if (root->data == x)
    {
        c = true;
        return;
    }

    ser(root->left, x);
    ser(root->right, x);
}

bool search(Node *root, int x)
{

    c = false; // neekharas concept - each time in test cases you have to
    // reinitiliaze the c
    ser(root, x);
    return c;
}