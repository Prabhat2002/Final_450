Recursion + Memoization :

class Solution 
{
  public:
    int dp[5001][301];
    int recur(int amount,vector<int>v,int i)
    {
        if(amount==0)
            return 1;
        if(amount<0 || i==v.size())
             return 0;
        if(dp[amount][i]!=-1)
            return dp[amount][i];
        long long int ans=0;
        ans+=recur(amount-v[i],v,i);
        ans+=recur(amount,v,i+1);
        return dp[amount][i]=ans;
    }
    int change(int amount, vector<int>& coins) 
    {
         memset(dp,-1,sizeof(dp));
         return recur(amount,coins,0);   
    }
};

Tabulation : 

class Solution 
{ 
  public:
    int change(int amount, vector<int>& coins) 
    {
         int n=coins.size();
         int dp[n+1][amount+1];
         for(int j=0;j<=amount;j++)
                 dp[0][j]=0;
         for(int i=0;i<=n;i++)
                 dp[i][0]=1;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=amount;j++)
             {
                 if(coins[i-1]<=j)
                     dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                 else
                     dp[i][j]=dp[i-1][j];
             }
         }
      return dp[n][amount];
    }
};
