map<string,int>dp;
    int solve(string s,vector<string>&nums)
    {
        int sz=s.length();
        if(sz==0)
           return 1;
        if(dp[s]!=0)
          return dp[s];
        for(int i=1;i<=s.length();i++)
        {
            int flag=0;
            string ss=s.substr(0,i);
            for(int j=0;j<nums.size();j++)
            {
                if(ss.compare(nums[j])==0)
                 {
                     flag=1;
                     break;
                 }
            }
            if(flag && solve(s.substr(i,sz-i),nums)==1)
               return dp[s]=1;
        }
        return dp[s]=0;
    }
    int wordBreak(string A, vector<string> &B) 
    {
        return  solve(A,B)==1;  
    }
