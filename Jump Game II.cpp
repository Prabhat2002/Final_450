class Solution 
{
 public:
    int jump(vector<int>& nums) 
    {
        int cur=0,ans=0,jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
           if(i+nums[i]>cur) 
                cur=i+nums[i];
           if(i==ans)
           {
               jump++;
               ans=cur;
           }
        }
        return jump;
    }
};
