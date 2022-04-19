int countPalinInRange (int n, string s, int q1, int q2)
{
    int dp[n][n];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
           dp[i][j]=0;
    }
    for(int i=0;i<n;i++)
       dp[i][i]=1;
    int j=0;
    for(int gap=1;gap<n;gap++)
    {
        for(int i=0;i<n-gap;i++)
        {
            if(gap==1)
            {
                if(s[i]==s[i+gap])
                   dp[i][i+gap]=1;
                else
                   dp[i][i+gap]=0;
            }
            else
            {
                if(s[i]==s[i+gap])
                     dp[i][i+gap]=dp[i+1][i-1+gap];
                else
                     dp[i][i+gap]=0;
            }
        }
    }
    int ans=0;
    int x=min(q1,q2);
    int y=max(q1,q2);
    for(int i=x;i<=y;i++)
    {
        for(int j=x;j<=y;j++)
          ans=ans+dp[i][j];
    }
    return ans;
}
