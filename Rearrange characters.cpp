class Solution
{
    public:
    string rearrangeString(string str)
    {
        map<char,int>mp;
        for(int i=0;i<str.length();i++)
           mp[str[i]]++;
        priority_queue<pair<int,char>>pq;
        for(auto i:mp)
           pq.push({i.second,i.first});
        string ans="";
        pair<int,char>block;
        while(!pq.empty())
        {
            if(ans.size()==0)
            {
                ans=ans+pq.top().second;
                block.first=pq.top().first-1;
                block.second=pq.top().second;
                pq.pop();
            }
            else
            {
                ans=ans+pq.top().second;
                pair<int,char>p; 
                if(pq.top().first>1) 
                {
                   p.first=pq.top().first-1;
                   p.second=pq.top().second;
                }
                pq.pop();
                if(block.first>0) 
                   pq.push(block); 
                if(pq.top().first>0) 
                   block=p;
             }  
         }
         if(ans.size()!=str.size())
           return "-1";
        return ans;
    }
};
