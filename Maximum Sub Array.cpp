class Solution{
public:
	vector<int> findSubarray(int a[], int n) 
	{
	   vector<vector<int>>temp;
       vector<int>arr;
       for(int i=0 ; i<n ; i++)
       {
          if(a[i] >= 0)
            arr.push_back(a[i]);
          else
          {
            temp.push_back(arr);
            arr.clear();
          }
       }
    
       if(!arr.empty())
           temp.push_back(arr);
       int mx=0;
       vector<int>res;
    
      for(auto i : temp)
      {
         long long sum=0;
         vector<int>t;
         for(auto j : i)
         {
            t.push_back(j);
            sum+=j;
         }
         if(mx < sum)
         {
            mx=sum;
            res=t;
         }
      }
    
      if(res.empty())
          return {-1};
    return res;
	}
};
