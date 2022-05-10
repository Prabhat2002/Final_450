class Solution
{
    public:
    long long int findMaxProduct(vector<int>&a, int n)
    {
        long long int mod=1000000007;
        sort(a.begin(),a.end());
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
              break;
        }
        int neg=i;
        int j=i;
        for(;j<n;j++)
        {
            if(a[j]>0)
              break;
        }
        int zero=j-i;
        int pos=n-j;
        long long prod=1;
        if(neg==1 && pos==0 && zero==0)
           return a[0];
        if(neg==1 && zero>0 && pos==0)
           return 0;
        for(int k=0;k<neg;k++)
            prod=((prod%mod)*a[k])%mod;
        if(prod<0)
          prod=prod/a[neg-1];
        for(int k=j;k<n;k++)
            prod=((prod%mod)*a[k])%mod;
        return prod;
    }
};
