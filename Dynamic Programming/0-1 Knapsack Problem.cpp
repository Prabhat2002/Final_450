Recursion + Memoization : 

class Solution
{
    public:
    int dp[1001][1001];
    int call(int val[],int wt[],int W,int n,int i)
    {
        if(i==n)
           return 0;
        if(dp[i][W]!=-1)
           return dp[i][W];
        if(wt[i]<=W)
        {
            int ans1=val[i]+call(val,wt,W-wt[i],n,i+1);
            int ans2=call(val,wt,W,n,i+1);
            return dp[i][W]=max(ans1,ans2);
        }
        else
        {
            dp[i][W]=call(val,wt,W,n,i+1);
            return dp[i][W];
        }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
               dp[i][j]=-1;
        }
        return call(val,wt,W,n,0);
    }
};

Tabulation : 

class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int dp[n+1][W+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(i==0 || j==0)
                   dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i-1]<=j)
                  dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                else
                  dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][W];
    }
};
