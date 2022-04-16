class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map<int,int>mp;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
           mp[nums[i]]++;
        for(auto i:mp)
        {
            if(i.second>n/3)
                ans.push_back(i.first);
        }
        return ans;
    }
};
