int distinct(vector<vector<int>> M, int n)
    {
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(mp[M[i][j]]==i)
                   mp[M[i][j]]++;
            }
        }
        for(auto i:mp)
        {
           if(i.second==n)
              ans++;
        }
        return ans;
    }
