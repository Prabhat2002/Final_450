 int minSwap(int arr[], int n, int k) 
    {
        int win=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
              win++;
        }
        int i=0,j=0;
        int ans=INT_MAX,count=0;
        if(win==0)
           return 0;
        while(i<n)
        {
            if(arr[i]>k)
               count++;
            if(i-j==win-1)
            {
                ans=min(ans,count);
                if(arr[j]>k)
                   count--;
                j++;
            }
            i++;
        }
        return ans;
    }
