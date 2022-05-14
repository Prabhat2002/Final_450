class Solution
{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int dp[n];
	    dp[0]=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        dp[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	               dp[i]=max(dp[i],dp[j]+arr[i]);
	        }
	    }
	    int ans=INT_MIN;
	    for(int i=0;i<n;i++)
	       ans=max(ans,dp[i]);
	   return ans;
	}  
};
