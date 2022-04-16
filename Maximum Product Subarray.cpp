
Method : 1

class Solution 
{
 public:
    int maxProduct(vector<int>& arr) 
    {
        vector<int>ans(n);
        int amin=arr[0],amax=arr[0];
        ans[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            int a=amin*arr[i];
            int b=amax*arr[i];
            amax=max(max(a,b),arr[i]);
            amin=min(max(a,b),arr[i]);
            ans[i]=max(ans[i-1],max(amax,amin));
        }
	    return ans[n-1];
    }
};

Method : 2

class Solution 
{
 public:
    int maxProduct(vector<int>& arr) 
    {
      int n=arr.size();
      int mul=1,ans=1;
	    for(int i=0;i<n;i++)
	    {
	        mul=mul*arr[i];
	        ans=max(ans,mul);
	        if(mul==0)
	           mul=1;
	    }
	    mul=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        mul=mul*arr[i];
	        ans=max(ans,mul);
	        if(mul==0)
	           mul=1;
	    }
      return ans; 
    }
};
