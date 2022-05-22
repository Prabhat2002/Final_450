Recursion + Memoization :

class Solution 
{
  public:
    int dp[13][10001];
    int minCoin(int i,vector<int>& coins,int amount)
    {
        if(i==coins.size() || amount<0)
           return INT_MAX-1;
        if(amount==0)
            return 0;
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        if(coins[i]<=amount)
        {
            int ans1=1+minCoin(i,coins,amount-coins[i]);
            int ans2=minCoin(i+1,coins,amount);
            return dp[i][amount]=min(ans1,ans2);
        }
        else
            return dp[i][amount]=minCoin(i+1,coins,amount);
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        for(int i=0;i<13;i++)
        {
            for(int j=0;j<10001;j++)
                dp[i][j]=-1;
        }
        int ans=minCoin(0,coins,amount);
        if(ans==INT_MAX-1)
            return -1;
        return ans;
    }
};

Tabulation :

class Solution 
{
  public:
    int coinChange(vector<int>& coins, int amount) 
    {
        int n=coins.size();
        int dp[n+1][amount+1];
        for(int i=0;i<=amount;i++)
            dp[0][i]=INT_MAX-1;
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                  dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][amount]==INT_MAX-1)
            return -1;
        return dp[n][amount];
    }
};
