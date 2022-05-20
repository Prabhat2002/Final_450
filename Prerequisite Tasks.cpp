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
