class Solution
{
    public:
    int largestPowerOfTwo(int n)
    {
      int x=0;
       while((1<<x)<=n)
          x++;
       return x-1;
    }
    int countSetBits(int n)
    {
      int x=largestPowerOfTwo(n);
      if(n==0)
          return 0;
      else 
          return (1<<(x-1))*x + (n- (1<<x) +1 ) + countSetBits( n- (1<<x));
    }
};
