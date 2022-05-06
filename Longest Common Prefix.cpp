Method : 1

class Solution 
{
 public:
    string longestCommonPrefix(vector<string>& nums) 
    {
       string ans="";
       for(int i=0;i<nums[0].size();i++)
       {
           for(int j=0;j<nums.size()-1;j++)
           {
               //Matching First Element of each index.
               if(nums[j][i]!=nums[j+1][i])
                   return ans;
           }
           ans=ans+nums[0][i];
       }
       return ans; 
    }
};

Method : 2

class Solution 
{
 public:
    string longestCommonPrefix(vector<string>& nums) 
    {
       string ans=nums[0];
       for(int i=1;i<nums.size();i++)
       {
           string cur="";
           for(int j=0;j<ans.size();j++)
           {
               if(nums[i][j]!=ans[j])
                   break;
               cur=cur+nums[i][j];
           }
           ans=cur;
       }
       return ans; 
    }
};
