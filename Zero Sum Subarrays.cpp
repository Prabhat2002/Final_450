ll findSubarray(vector<ll> arr, int n ) 
    {
        ll sum=0,ans=0;
        map<ll,ll>mp;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(mp.find(sum)!=mp.end())
               ans=ans+mp[sum];
            mp[sum]++;
        }
        return ans;
    }
