class Solution
{   
 public:
    int getPairsCount(int a[], int n, int k) 
    {
       int ans=0;
       unordered_map<int,int> m;
       for(int i=0;i<n;i++)
       {
           int b=k-a[i];
           if(m[b])
             ans+=m[b];
           m[a[i]]++;
       }
        return ans;
    }
};
