class Solution
{
    public:
    bool isPowerofTwo(long long n)
    {
        long long x=log2(n);
        for(int i=0;i<=x+1;i++)
        {
            long long y=pow(2,i);
            if(y==n)
               return 1;
        }
        return 0;
    }
};
