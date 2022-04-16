    bool find3Numbers(int nums[], int n, int x)
    {
        sort(nums,nums+n);
        for(int i=0;i<n;i++) 
        {
             if(i>0 && nums[i]==nums[i-1])
                continue;
            int start=i+1, end=n-1,sum;
            while(start<end) 
            {
                sum = nums[i]+nums[start]+nums[end];
                if(sum>x)
                    end--;
                else if(sum<x) 
                    start++;
                else 
                   return 1;
            }
        }
        return 0;
    }
