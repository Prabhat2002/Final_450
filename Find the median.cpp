	int find_median(vector<int> v)
		{
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(n%2)
		       return v[n/2];
		    return (v[n/2]+v[n/2-1])/2; 
		}
