int search(int arr[], int n, int x, int k)
{
    for(int i=1;i<n;i++)	
    {
        if(abs(arr[i]-arr[i-1])<=k)
            continue;
        else
            return -1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}   
