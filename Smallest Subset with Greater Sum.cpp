class Solution
{
  public:
    int minSubset(vector<int> &arr,int n)
    {
       if(n==1)
          return 1;
       sort(arr.begin(),arr.end()); 
       if(arr[n-1]==0)
          return n;
       long long ans=0,val=0;
       for(int i=0;i<n;i++)
          ans=ans+arr[i];
       for(int i=0;i<=n/2;i++)
       {
           val+=arr[n-1-i];
           if(val>ans-val)
              return i+1;
       }
       return -1;
    }
};
