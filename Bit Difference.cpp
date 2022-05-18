class Solution
{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {
        int ans=0;
        while(a||b)
        {
            int x=a%2;
            int y=b%2;
            if(x!=y)
               ans++;
            a=a/2;
            b=b/2;
        }
        return ans;
    }
};
