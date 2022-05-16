class Solution
{
 public:
    int minValue(string s, int k)
    {
        int n=s.length();
        map<char,int>mp;
        for(int i=0;i<n;i++)
           mp[s[i]]++;
        priority_queue<int>pq;
        for(auto i:mp)
           pq.push(i.second);
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            x--;
            pq.push(x);
        }
        int ans=0;
        while(!pq.empty())
        {
            ans=ans+pow(pq.top(),2);
            pq.pop();
        }
        return ans;
    }
};
