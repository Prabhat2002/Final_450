string smallestWindow (string s, string t)
    {
        if(t.length()>s.length())
            return "-1";  
        string ans="";
        int si=INT_MAX;
        unordered_map<char,int> m;
        for(auto c:t) 
            m[c]++;
        int i=0,j=0;
        int count=m.size();
        bool found=0;
        while(j<s.size())
        {
            if(m.find(s[j])!=m.end()) 
            {
                m[s[j]]--;
                if(m[s[j]]==0) 
                    count--;
            }
            while(count==0) 
            {
                found=1;
                if(si>j-i+1)
                {
                    si=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
                if(m.find(s[i])!=m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]]==1) 
                        count++;
                }
                i++;      
            }
            j++;
        }
         if(found)
            return ans;
        return "-1";
    }
