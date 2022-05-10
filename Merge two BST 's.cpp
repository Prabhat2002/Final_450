 void inorder(vector<int>&v,Node* root)
    {
        if(root==NULL)
           return;
        inorder(v,root->left);
        v.push_back(root->data);
        inorder(v,root->right);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int>a,b;
        inorder(a,root1);
        inorder(b,root2);
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        vector<int>ans(m+n);
        int k=0;
        while(i<n && j<m)
        {
           if(a[i]<=b[j])
               ans[k++]=a[i++];
           else
               ans[k++]=b[j++];
        }
        while(i<n)
            ans[k++]=a[i++];
        while(j<m)
            ans[k++]=b[j++];
        return ans;
    }
