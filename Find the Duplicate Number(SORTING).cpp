class Solution 
{
 public:
    int findDuplicate(vector<int>& nums) 
    {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       for(int a=0;a<n-1;a++)
       {
           if(nums[a]==nums[a+1])
              return nums[a];
       }
        return -1;
    }
};
