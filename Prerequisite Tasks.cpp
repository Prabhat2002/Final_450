Method 1: By Topological sort

class Solution 
{
public:
	bool isPossible(int n,vector<pair<int,int>>& nums) 
	{
	    vector<int>ans;
	    unordered_map<int,int>mp;
	    vector<int>adj[n];
	    for(int i=0;i<nums.size();i++)
	        adj[nums[i].second].push_back(nums[i].first);
	    for(int i=0;i<n;i++)
	    {
	        for(int j:adj[i])
	           mp[j]++;
	    }
	    queue<int>q;
	    for(int i=0;i<n;i++)
	    {
	        if(mp[i]==0)
	           q.push(i);
	    }
	    while(!q.empty())
	    {
	        int x=q.front();
	        ans.push_back(x);
	        q.pop();
	        for(int i:adj[x])
	        {
	           mp[i]--;
	           if(mp[i]==0)
	              q.push(i);
	        }
	    }
	    return ans.size()==n?1:0;
	}
};

Method 2: By cycle detection in Directed Graph

class Solution 
{
public:
    bool checkCycle(int i , vector<int>&vis , vector<int> adj[])
    {
        if(vis[i] == 1)
            return true;
        if(vis[i] == 0)
        {
            vis[i] = 1;
            for(auto it: adj[i])
            {
                if(checkCycle(it , vis , adj))
                   return true;
            }        
        }
        // For a vertex having no connections
        vis[i]=100;
        return false;
    }
	bool isPossible(int n,vector<pair<int,int>>& nums) 
	{
	    vector<int>ans;
	    unordered_map<int,int>mp;
	    vector<int>adj[n];
	    for(int i=0;i<nums.size();i++)
	        adj[nums[i].second].push_back(nums[i].first);
	    vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                if(checkCycle(i,vis,adj))
                   return false;
            }
        }
        return true;
	}
};
