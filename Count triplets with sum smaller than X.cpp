long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long count=0;
	    set<long long>st(arr,arr+n);
	    vector<long long>v(st.begin(),st.end());
	    for(int i=0;i<n;i++)
	    {
	        int j=i+1,k=n-1;
	        while(j<=k)
	        {
	            long long x=v[i]+v[j]+v[k];
	            //means that when sum is greater than the cur x m=you have decreased the k means 
	            //that if you will continue decreasing k when it will hit the x<sum
                // you can continue decreasing k till k and that will result lesser than sum.
	            if(x<sum)
	            {
	                count=count+(k-j);
	                j++;
	            }
	            else
	               k--;
	        }
	    }
	    return count;
	}
