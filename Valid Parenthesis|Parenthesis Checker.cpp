
Method 1 :

bool ispar(string x)
    {
        int n=x.length();
        map<char,char>mp;
        mp['(']=')';
        mp['{']='}';
        mp['[']=']';
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            char c=st.empty()?'#':st.top();
            if(mp[c]==x[i])
               st.pop();
            else
               st.push(x[i]);
        }
        return st.size()==0;
    }
    
Method 2 :

 bool isValid(string s) 
    {
       stack<char>st; 
        for(int i=0;i<s.length();i++) 
        {
            char top = st.empty() ? '#' : st.top();    
            if(top == '(' && s[i] == ')')
                st.pop();
            else if(top == '{' && s[i] == '}')
                st.pop();
            else if(top == '[' && s[i] == ']')
                st.pop();
            else
                st.push(s[i]);  
        } 
        return st.empty(); 
    }
