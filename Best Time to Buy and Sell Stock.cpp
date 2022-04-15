
METHOD : 1

class Solution 
{
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

METHOD : 2

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
       vector<int>left(n),right(n); 
       left[0]=prices[0];
       right[n-1]=prices[n-1];
       for(int i=0;i<n-1;i++)
       {
           left[i+1]=min(left[i],prices[i+1]);
       }
       for(int i=n-1;i>0;i--)
       {
           right[i-1]=max(right[i],prices[i-1]);
       }
       for(int i=0;i<n;i++)
       {
           ans=max(ans,right[i]-left[i]);
       }
      return ans;
    }
};

    
