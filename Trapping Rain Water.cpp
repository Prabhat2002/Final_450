    long long trappingWater(int arr[], int n)
    {
         int left[n];
         int right[n];
         left[0]=arr[0];
         right[n-1]=arr[n-1];
         for(int a=1;a<n;a++)
            left[a]=max(left[a-1],arr[a]);
         for(int a=n-2;a>=0;a--)
             right[a]=max(right[a+1],arr[a]);        
         long long sum=0;
         for(int a=0;a<n;a++)
         {
             int val=min(left[a],right[a]);
             sum=sum+val-arr[a];
         }
         return sum;
    }
