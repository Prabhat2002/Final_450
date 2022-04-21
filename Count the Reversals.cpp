int countRev (string s)
{
    if(s.size()%2)
      return -1;
    stack<int>st;
    for(int i=0;i<s.size();i++)
    {
        char c=st.empty()?'#':st.top();
        if(c=='{' && s[i]=='}')
           st.pop();
        else
           st.push(s[i]);
    }
    double close=0,open=0;
    while(!st.empty())
    {
        if(st.top()=='{')
            open++;
        else
            close++;
        st.pop();
    }
    return int(ceil(open/2)+ceil(close/2));
}
