class Solution {
public:
    bool searchMatrix(vector<vector<int>>& grid, int target) 
    {
        int m=grid.size();
        for(int k=0;k<m;k++)
        {
            vector<int>nums(grid[k].begin(),grid[k].end());
            int i=0;
            int j=nums.size()-1;
            while(i<=j)
            {
                int m=(i+j)/2;
                if(nums[m]==target)
                    return 1;
                else if(nums[m]<target)
                    i=m+1;
                else
                    j=m-1;
            }
        }
        return 0;
    }
};
