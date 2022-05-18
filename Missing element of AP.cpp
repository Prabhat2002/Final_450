
METHOD : 1

class Solution
{   
 public:
    int findMissing(int arr[], int n) 
    {
      if(n==2)
          return (arr[0]+arr[1])/2 ;
      int d1 = arr[1] - arr[0];
      int d2 = arr[2] - arr[1];
      int d;
      if(d1==d2)
          d = d1 ;
      else
          d = arr[n-1] - arr[n-2];
      for( int i = 1 ; i<n ; i++)
      {
          if(arr[i]-arr[i-1]!=d)
              return (arr[i-1]+d) ; 
      }
    }
};


METHOD : 2

class Solution
{   
 public:
    int findMissing(int arr[], int n) 
    {
         int d=(arr[n-1]-arr[0])/n;
         for(int i=0;i<n;i++)
         {
             int element=arr[0]+i*d;
             if(element!=arr[i])
                return element;
         }
    }
};
