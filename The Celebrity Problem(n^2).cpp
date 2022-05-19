int celebrity(vector<vector<int> >& M, int n) 
    {
        unordered_map<int,int>mp;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    mp[i]++;
                    ump[j]++;
                }   
            }    
        }
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(mp[i]==0 && ump[i]==n-1)
                   return i;
        }
        return -1;
    }
