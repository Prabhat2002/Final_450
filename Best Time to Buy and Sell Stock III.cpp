class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
       int n=prices.size(),ans=0;
        int high=0;
        for(int i=n-1;i>=0;i--)
        {
            high=max(high,prices[i]);
            ans=max(ans,high-prices[i]);
        }
        return ans;
    }
};

    
