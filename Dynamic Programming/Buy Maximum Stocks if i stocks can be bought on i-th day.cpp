class Solution 
{
  public:
    int buyMaximumProducts(int n, int k, int price[])
    {
        int ans=0;
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
           vec.push_back({price[i],i+1});
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            if(k/vec[i].first<=vec[i].second)
            {
                ans=ans+k/vec[i].first;
                k=0;
            }
            else
            {
                ans=ans+vec[i].second;
                k=k-vec[i].first*vec[i].second;
            }
        }
        return ans;
    }
};
