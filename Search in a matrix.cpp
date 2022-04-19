	int matSearch(vector <vector <int>> &mat, int n, int m, int X)
	{
	    for(int k=0;k<n;k++)
	    {
           vector<int>v=mat[k];
           int i=0,j=m-1;
           while(i<=j)
           {
               int m=(i+j)/2;
               if(v[m]==X)
                   return 1;
               else if(v[m]>X)
                   j=m-1;
               else
                   i=m+1;
           }
	    }
	    return 0;
	}
