class Solution
{
  public:
    vector<vector<int> > stockBuySell(vector<int>v, int n)
    {
       vector<vector<int>>ans;    
       int buy=0,sell=0,flag=0;
       for(int i=1;i<n;i++)
       {
           if(v[i]>v[i-1] && v[i]>v[buy])
           {
               sell++;
               flag=1;
           }
           else if(buy==sell)
           {
               sell=i;
               buy=i;
           }
           else
           {
               ans.push_back({buy,sell});
               buy=i,sell=i;
           }
       }
       if(flag==0)
          return ans;
       else if(buy!=n-1 && sell==n-1)
          ans.push_back({buy,sell});
       return ans;
    }
};
