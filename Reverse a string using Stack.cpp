char* reverse(char *S, int len)
{
    stack<char>s;
    for(int a=0;a<len;a++)
        s.push(S[a]);   
    for(int a=0;a<len;a++)
    {
        char c=s.top();
        s.pop();
        S[a]=c;
    }
    return S;
}
