class Solution 
{
    public:
      bool isPossible(int A[],int m,int M,int n){
        int c=0,sum=0;
        for(int i=0;i<n;i++){
            if(sum+A[i]<=m)
                sum+=A[i];
            else{
                c++;
                sum=A[i];
            }
        }
        return c<M;
    }
    int findPages(int A[], int N, int M) 
    {
        int l=*max_element(A,A+N);
        int r=accumulate(A,A+N,0);
        while(l<=r){
            int m=(r+l)/2;
            if(isPossible(A,m,M,N))
                r=m-1;
            else
                l=m+1;
        }
        return r+1;
    }
};
