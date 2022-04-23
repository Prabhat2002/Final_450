 int romanToDecimal(string s) 
    {
        map<char,int>mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        int ans=0;           
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]>=mp[s[i+1]])
                ans=ans+mp[s[i]];
            else
            { 
                ans=ans+mp[s[i+1]]-mp[s[i]];
                i++;
            }
        }
      return ans;
    }
