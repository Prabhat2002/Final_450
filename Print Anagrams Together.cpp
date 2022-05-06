    vector<vector<string> > Anagrams(vector<string>&nums) 
    {
       map<string,vector<string>>mp;
       for(int i=0;i<nums.size();i++)
       {
           string str=nums[i];
           sort(str.begin(),str.end());
           mp[str].push_back(nums[i]);
       }
       vector<vector<string>>ans;
       for(auto vec:mp)
          ans.push_back(vec.second);
       return ans;
    }
