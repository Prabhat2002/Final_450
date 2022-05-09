 bool areIsomorphic(string s1, string s2)
    {
        int n1=s1.length()
        int n2=s2.length();
        int m1[256]={0};
        int m2[256]={0};
        if(n1!=n2)
          return false;
        for(int i=0;i<n1;i++)
        {
            if(!m1[s1[i]] and !m2[s2[i]])
            {
                m1[s1[i]]=s2[i];
                m2[s2[i]]=s1[i];
            }
            else if(m1[s1[i]]!=s2[i])
                return false;
        }
        return true;
    }
