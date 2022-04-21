  int minDist(int arr[], int n, int x, int y) 
    {
        int i=-1;
       	int j=-1;
	    int ans=INT_MAX;
	    for(int a=0;a<n;a++)
	    {
		   if(arr[a]==x)
		     i=a;	
		   if(arr[a]==y)
		     j=a;
		   if((i!=-1)&&(j!=-1))
			  ans=min(ans,abs(j-i));
	    }
	    if(ans==INT_MAX)
	       return -1;
	    return ans; 
    }
