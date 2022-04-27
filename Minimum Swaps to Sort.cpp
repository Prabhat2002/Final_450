	int minSwaps(vector<int>&nums)
	{
	   int n=nums.size(); 
	   vector<pair<int,int>>vec;
	   for(int i=0;i<n;i++)
	       vec.push_back({nums[i],i});
	   sort(vec.begin(),vec.end());
	   int ans=0;
	   for(int i=0;i<vec.size();i++)
	   {
	       if(i==vec[i].second)
	           continue;
	       else
	       {
	           ans++;
	           swap(vec[i],vec[vec[i].second]);
	           i--;
	       }
	   }
	   return ans;
	}
