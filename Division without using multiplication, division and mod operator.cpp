class Solution
{
    public:
    pair<long long,long long> call(long long a,long long b)
    {
        int i=0;
        while(b*pow(2,i)<=a)
            i++;
        a=a-pow(2,i-1)*b;
        return {pow(2,i-1),a};
    }
    long long divide(long long dividend, long long divisor) 
    {
        int sign=dividend<0?-1*(divisor<0?-1:1):1*(divisor<0?-1:1);
        long long ans=0;
        dividend=abs(dividend);
        divisor=abs(divisor);
        while(dividend>=divisor)
        {
            pair<long long,long long>p=call(dividend,divisor);
            ans=ans+p.first;
            dividend=p.second;
        }
        return ans*sign;
    }
};
