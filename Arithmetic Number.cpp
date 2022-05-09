class Solution
{
public:
    int inSequence(int A, int B, int C)
    {
        if(C==0)
          return A==B;
        int n=(B-A)/C;
        if(n<0)
          return 0;
        return A+C*n==B?1:0;
    }
};
