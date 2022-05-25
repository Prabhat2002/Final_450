class Solution
{
public:
    vector<ll> nthRowOfPascalTriangle(int n) 
    {
        if(n==1)
          return {1};
        if(n==2)
          return {1,1};
          
        vector<vector<long long int>>res;
        res.push_back({1});
        res.push_back({1,1});
        
        for(int i=2;i<n;i++)
        {
            vector<long long int>v;
            v.push_back(1);
            for(int j=0;j<i-1;j++)
                v.push_back((res[i-1][j]+res[i-1][j+1])%1000000007);
            v.push_back(1);
            res.push_back(v);
        }
        return res.back();
    }
};
