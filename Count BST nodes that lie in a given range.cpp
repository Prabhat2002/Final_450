int recur(Node* root,int l,int h)
{
    if(!root)
       return 0;
    int ans=0;
    if(root->data>=l && root->data<=h)
        ans++;
    ans+=getCount(root->left,l,h);
    ans+=getCount(root->right,l,h);
    return ans;
}
int getCount(Node *root, int l, int h)
{
    if(!root)
       return 0;
    return recur(root,l,h);
}
