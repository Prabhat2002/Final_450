class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        int M=1e9+7;
        if(n==1||n==2) return n;
        long long prev=1, curr=2;
        for(int i=3;i<=n;i++) 
        {
            long long temp=(curr%M+((i-1)*prev)%M)%M;
            prev=curr;
            curr=temp;
        }
        return curr;
    }
};    
