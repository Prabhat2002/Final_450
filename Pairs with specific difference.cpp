    int maxSumPairWithDifferenceLessThanK(int nums[], int n, int k)
    {
        int ans=0;
        sort(nums,nums+n);
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]-nums[i-1]<k)
            {
                ans=ans+nums[i]+nums[i-1];
                i--;
            }
        }
        return ans;
    }
