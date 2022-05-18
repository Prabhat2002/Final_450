class Solution
{
  public:
	bool check_elements(int arr[], int n, int l, int r)
	{
	    set<int>s;
	    while(l<=r)
	    {
	        s.insert(l);
	        l++;
	    }
	    for(int i=0;i<n;i++)
      {
         if(s.find(arr[i])!=s.end())
            s.erase(arr[i]);
      }
     return s.size()==0;
	}
};
