vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        queue<int>q;
        vector<bool>vis(V,false);
        q.push(0);
        vis[0]=true;
        vector<int>ans;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            ans.push_back(x);
            for(auto i:adj[x])
            {
                if(!vis[i])
                {
                   q.push(i);
                   vis[i]=true;
                }
            }
        }
        return ans;
    }
