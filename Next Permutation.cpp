class Solution 
{
 public:
    void nextPermutation(vector<int>& nums) 
    {
        int prev=-1;
        int k=nums.size()-1;
        for(;k>0;k--)
        {
           if(nums[k-1]<nums[k])
           {
               prev=k-1;
               break;
           }
        }
        if(prev==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            int x=nums.size()-1;
            for(;x>=0;x--)
            {
                if(nums[x]>nums[prev])
                    break;
            }
            swap(nums[x],nums[prev]);
            reverse(nums.begin()+prev+1,nums.end());
        }
    }
};
