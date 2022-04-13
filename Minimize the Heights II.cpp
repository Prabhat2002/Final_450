int getMinDiff(int arr[], int n, int k) 
    {
         sort(arr,arr+n);
         int ans=arr[n-1]-arr[0];
         int large,small;
         for(int i=1;i<n;i++)
         {
            if(arr[i]<k)
              continue;
            large=max(arr[i-1]+k,arr[n-1]-k);
            small=min(arr[i]-k,arr[0]+k);
            ans=min(ans,large-small);
         }
         return ans;
    }
