class Solution
{
  public:
    int findPlatform(int arr[], int dep[], int n)
    {
        int ans=0;
    	vector<vector<int>>v;
    	for(int i=0;i<n;i++)
    	   v.push_back({arr[i],dep[i]});
    	sort(v.begin(),v.end());   
    	priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(v[0][1]);
        for(int i=1; i<n; i++)
        {
            if(pq.top()<v[i][0])
                pq.pop();
            else
                ans++;
            pq.push(v[i][1]);
        }
        return ans+1;
    }
};
