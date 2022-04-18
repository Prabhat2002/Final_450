int findZeroes(int arr[], int n, int m) 
    {
        int i=0,j=0,ans=0;
        while(i<n)
        {
            if(arr[i]==0)
               m--;
             while(m<0)
             {
               if(arr[j]==0)
                  m++;
               j++;
             }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }  
};
