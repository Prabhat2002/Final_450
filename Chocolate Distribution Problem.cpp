  long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(),a.end());
        long long mp=a[m-1]-a[0];
        for(long long x=1;x<=n-m;x++)
        {
          long long y=(a[x+m-1]-a[x]);
          mp=min(mp,y);
        }
        return mp;
    } 
