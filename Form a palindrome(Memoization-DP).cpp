
Method : 1

int dp[1001][1001];
    int recur(string s1,string s2,int i,int j,int n)
    {
        if(i==n || j==n)
           return 0;
        if(dp[i][j]!=-1)
          return dp[i][j];
        if(s1[i]==s2[j])
            dp[i][j]=1+recur(s1,s2,i+1,j+1,n);
        else
        {
            int ans1=recur(s1,s2,i,j+1,n);
            int ans2=recur(s1,s2,i+1,j,n);
            dp[i][j]=max(ans1,ans2);
        }
        return dp[i][j];
    }
    int countMin(string str)
    {
       string s1=str;
       reverse(str.begin(),str.end());
       string s2=str;
       for(int i=0;i<=1000;i++)
       {
           for(int j=0;j<=1000;j++)
              dp[i][j]=-1;
       }
       return str.length()-recur(s1,s2,0,0,s1.length());
    }

Method : 2 

    int countMin(string str)
    {
       string s1=str;
       reverse(str.begin(),str.end());
       string s2=str;
       int n=str.length();
       int dp[n+1][n+1];
       for(int i=0;i<=n;i++)
       {
           dp[i][0]=0;
           dp[0][i]=0;
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n;j++)
           {
               if(s1[i-1]==s2[j-1])
                  dp[i][j]=1+dp[i-1][j-1];
               else
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
       return n-dp[n][n];
    }
