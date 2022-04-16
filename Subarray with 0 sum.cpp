 bool subArrayExists(int arr[], int n)
    {
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(mp.find(sum)!=mp.end())
                return 1;
            mp[sum]++;
        }
        return 0;
    }
