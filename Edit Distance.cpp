 int dp[101][101];
    int check(string s,string t,int x,int y)
    {
        if(x==-1)
           return y+1;
        if(y==-1)
           return x+1;
        if(dp[x][y]!=-1)
          return dp[x][y];
        if(s[x]==t[y])
           return dp[x][y]=check(s,t,x-1,y-1);
        int a=check(s,t,x-1,y-1);
        int b=check(s,t,x-1,y);
        int c=check(s,t,x,y-1);
        dp[x][y]=1+min({a,b,c});
        return dp[x][y];
    }
    int editDistance(string s, string t) 
    {
        int m=s.length(),n=t.length();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
              dp[i][j]=-1;
        }
        return check(s,t,m-1,n-1);    
    }
