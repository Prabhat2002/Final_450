class Solution
{
  public:
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        priority_queue<pair<int,int>> pq;
        vector<int>v;
        for(int i=0; i<k; i++)
           pq.push({nums[i],i});
        v.push_back(pq.top().first);
        for(int i=k;i<n;i++)
        {
          pq.push({nums[i],i});
          while(!pq.empty() && pq.top().second+k<=i)
             pq.pop();
          v.push_back(pq.top().first);
        }
      return v;
    }
};
