long long maxSubarraySum(int arr[], int n)
{
        long long int sum=0;
        long long int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
          if(arr[i]<=sum+arr[i]) 
             sum+=arr[i];
          else 
            sum=arr[i];
          ans=max(ans,sum);
        }
        return ans;
}
