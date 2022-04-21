    int *findTwoElement(int *arr, int n) 
    {
        map<int,int>mp;
        int *a=new int[2];
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        for(int i=1;i<n+1;i++)
        {
            if(mp[i]==2)
            {
                a[0]=i;
                break;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            if(mp[i]==0)
            {
                a[1]=i;
                break;
            }
        }
       return a;
    }
