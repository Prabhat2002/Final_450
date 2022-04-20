set<string> allPossibleSubsequences(string s) 
    {
        set<string>ans;
        string st="";
        subsets(ans,st,s,0,s.length());
        set<string>sts;
        for(string i:ans)
        {
            int n=i.length();
            if(i.length()>=2)
            {
                if((i[0]=='a' || i[0]=='e' || i[0]=='i'|| i[0]=='o' ||  i[0]=='u')&&
                (i[n-1]!='a' && i[n-1]!='e' && i[n-1]!='i'&& i[n-1]!='o' &&  i[n-1]!='u'))
                    sts.insert(i);
            }
        }
        return sts;
    }
    void subsets(set<string>&ans,string st,string s,int i,int n)
    {
        if(i==n)
        {
            ans.insert(st);
            return;
        }
        subsets(ans,st,s,i+1,n);
        st=st+s[i];
        subsets(ans,st,s,i+1,n);
    }
