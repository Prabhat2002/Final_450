class Solution 
{
 public:
   unordered_map<string, int>m;
   vector<TreeNode*>v;
   string solve(TreeNode*root)
   {
       if(!root) 
          return " ";
       string s = " ";
       if(!root->left and !root->right)
       {
           s=to_string(root->val);
           m[s]++;
       }
       s=s+to_string(root->val);
       s=s+solve(root->left);
       s=s+solve(root->right);
       if(m[s]==1)
          v.push_back (root);
       m[s]++;
       return s;
   }
   vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
   {
        m.clear();
        v.clear();
        solve(root);
        return v;    
   }
};
