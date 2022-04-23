string secFrequent (string s[], int n)
    {
        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;
        map<string,int>mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
            if(pq.size()>2)
               pq.pop();
        }
        if(pq.size()<2)
           return "";
        return pq.top().second;
    }
