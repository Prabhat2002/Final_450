Method 1 :

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

Method 2 :
class Solution
{
    public:
    int largestPowerOfTwo(int n)
    {
      int x=0;
       while((pow(2,x))<=n)
          x++;
       return x-1;
    }
    int countSetBits(int n)
    {
      int x=largestPowerOfTwo(n);
      if(n==0)
          return 0;
      else 
          return (pow(2,x-1))*x + (n- (pow(2,x)) +1 ) + countSetBits( n- (pow(2,x)));
    }
};

