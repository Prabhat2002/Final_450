void inorder(Node* root,vector<int>&vec)
{
    if(root==NULL)
      return;
    inorder(root->left,vec);
    vec.push_back(root->data);
    inorder(root->right,vec);
}
float findMedian(struct Node *root)
{
      vector<int>vec;
      inorder(root,vec);
      int n=vec.size();
      float ans;
      if(n%2)
         ans=float(vec[n/2]);
      else
         ans=(float(vec[n/2-1])+float(vec[n/2]))/2;
    return ans;
}
