int transform (string A, string B)
    {
        if(A.size()!=B.size())
           return -1;
        vector<int>v1(256,0);
        for(int i=0;i<A.size();i++)
        {
            v1[A[i]-'0']++;
            v1[B[i]-'0']--;
        }
        for(int i=0;i<256;i++)
        {
            if(v1[i]!=0)
              return -1;
        }
        int n1=A.size()-1;
        int n2=n1,ans=0;
        while(n1>=0)
        {
            if(A[n1]!=B[n2])
                ans++;
            else
              n2--;
           n1--;
        }
        return ans;
    }
