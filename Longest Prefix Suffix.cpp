int lps(string s) 
	{
	int m=s.length();
    vector<int> lps(m,0);
    for(int i=1;i<m;i++)
    {
        int j=lps[i-1];
        while(j>0 && s[i]!=s[j]) 
            j=lps[j-1];
        if(s[i]==s[j]) 
            j++;
        lps[i]=j;
    }
    return lps[m-1];
	}
