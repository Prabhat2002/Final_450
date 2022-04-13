pair<long long, long long> getMinMax(long long a[], int n) 
{
    long long x=INT_MAX;
    long long y=INT_MIN;
    for(int i=0;i<n;i++) 
    {
        x=min(x,a[i]);
        y=max(y,a[i]);
    }
    return {x,y};
}
