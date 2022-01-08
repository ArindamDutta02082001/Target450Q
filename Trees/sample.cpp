
vector<vector<int>> m;int sum=0;
void func(Node* root)
{

if(root==NULL)
return 0;

sum+=root->data;



if(sum==k)
sum=0;

}