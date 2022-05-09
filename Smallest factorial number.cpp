 static bool isValid(int mid,int n)
    {
       int ans=0;
       while(mid>0)
       {
           ans+=mid/5;
           mid=mid/5;
           if(ans>=n)
             return true;
       }
       return false;
    }
    int findNum(int n)
    {
      int low=2,high=n*5,mid,ans;
      while(low<=high)
      {
          mid=low+(high-low)/2;
          if(isValid(mid,n))
          {
              ans=mid;
              high=mid-1;
          }
          else
          low=mid+1;
      }
      return ans;
    }
