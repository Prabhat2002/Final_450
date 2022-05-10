class Solution 
{
  public:
    void inorder(Node* root,vector<int>&ans)
    {
        if(!root)
           return;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    
    int KthSmallestElement(Node *root, int k)
    {
        vector<int>ans;
        inorder(root,ans);
        if(ans.size()<k)
          return -1;
        return ans[k-1];
    }
};
