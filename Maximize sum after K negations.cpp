class Solution
{
  public:
    long long int maximizeSum(long long int arr[], int n, int k)
    {
       sort(arr,arr+n);
       int i;
       for(i=0;i<n;i++)
       {
           if(arr[i]>=0)
             break;
       }
       int neg=i;
       int j=0;
       while(j<neg && k>0)
       {
           arr[j]=arr[j]*-1;
           j++;
           k--;
       }
       long long int ans=0;
       if(k>0)
       {
           sort(arr,arr+n);
           for(int i=0;i<n;i++)
              ans=ans+arr[i];
           if(k%2==1)
              ans=ans-2*arr[0];
           return ans;    
       }
       for(int i=0;i<n;i++)
          ans=ans+arr[i];
       return ans;
    }
};
