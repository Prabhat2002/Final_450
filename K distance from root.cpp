void call(Node* root,int i,vector<int>&ans,int k)
{
    if(root==NULL)
       return;
    if(i==k)
    {
        ans.push_back(root->data);
        return;
    }
    call(root->left,i+1,ans,k);
    call(root->right,i+1,ans,k);
}
vector<int> Kdistance(struct Node *root, int k)
{
    if(k==0)
        return {root->data};
    vector<int>ans;
    call(root,0,ans,k);
    return ans;
}
