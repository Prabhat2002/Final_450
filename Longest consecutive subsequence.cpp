int findLongestConseqSubseq(int arr[], int n)
    {
        sort(arr,arr+n);
        // vector<int>ans(n,0);
        int res=0,count=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==1)
               count++;
            else if(arr[i]-arr[i-1]==0)
               continue;
            else
            {
                res=max(res,count);
                count=0;
            }
        }
        return max(res,count)+1;
    }
