class Solution 
{
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        auto it=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(it[1]>=nums[i][0])
                it[1]=max(nums[i][1],it[1]);
            else
            {
                ans.push_back(it);
                it=nums[i];
            }
        }
        ans.push_back(it);
        return ans;
    }
};
