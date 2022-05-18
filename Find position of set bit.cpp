class Solution 
{
  public:
    int findPosition(int n) 
    {
        if(n==0)
           return -1;
        int x=log2(n);
        int y=pow(2,x);
        if(y==n)
           return x+1;
        return -1;
    }
};
