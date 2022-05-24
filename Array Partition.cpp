class Solution
{
  public:
    bool partitionArray(int n, int k, int m, vector<int> &v)
    {
        bool dp[n+1]={0};
        dp[0] = 1;
        sort(v.begin(),v.end());
        for(int i=k;i<=n;i++)
        {
            int l=lower_bound(v.begin(),v.end(),v[i-1]-m)-v.begin();
            int h=i-k;
            for(int j=l;j<=h;j++)
            {
                dp[i]|=dp[j];
                if(dp[i])
                    break;
            }
        }
       return dp[n];
    }
};
