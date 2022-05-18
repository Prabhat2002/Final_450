class Solution 
{
  public:
    int setBits(int N) 
    {
        int ans=0;
        while(N)
        {
            if(N%2==1)
               ans++;
            N=N/2;
        }
        return ans;
    }
};
