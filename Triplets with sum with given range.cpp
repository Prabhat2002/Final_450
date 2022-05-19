Method : 1

class Solution 
{
  public:
    int count(int arr[],int n,int val)
    {
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j!=k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum>val)
                  k--;
                else
                {
                    ans+=(k-j);
                    j++;
                }
            }
        }
        return ans;
    }
    int countTriplets(int arr[], int n, int L, int R) 
    {
        int x=count(arr,n,R);
        int y=count(arr,n,L-1);
        return x-y;
    }
 }
 
Method : 2

class Solution 
{
  public:
    int count(int arr[],int n,int val)
    {
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j!=k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum<val)
                   j++;
                else
                {
                   ans+=(k-j);
                   k--;
                }
            }
        }
        return ans;
    }
    int countTriplets(int arr[], int n, int L, int R) 
    {
        int x=count(arr,n,R+1);
        int y=count(arr,n,L);
        return y-x;
    }
};
