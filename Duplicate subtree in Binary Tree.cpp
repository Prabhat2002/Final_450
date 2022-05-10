class Solution 
{
  public:
    unordered_map<string,int>mp;
    string check(Node* root)
    {
        //tree are different having same pattern of node 
        //3->left->4 and 3->right->5 vs 3->right->4 and 4->right->5(skew type)
        if(root==NULL)
           return " ";
        string s="";   
        //if leaf node reaches no need to check just store and return;
        if(root->left==NULL && root->right==NULL)
        {
            s=to_string(root->data);
            return s;
        }
        //adding root's val in the string
        s=s+to_string(root->data);
        //checking at left of the string
        s=s+check(root->left);
        //checking at right of the string
        s=s+check(root->right);
        mp[s]++;
        return s;
    }
    int dupSub(Node *root) 
    {
        check(root);
        for(auto i:mp)
        {
            if(i.second>=2)
               return 1;
        }
        return 0;
    }
};
