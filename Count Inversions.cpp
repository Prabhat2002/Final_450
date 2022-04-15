class Solution
{
  public:
    long long merge(long long arr[],long long low,long long mid,long long high)
    {
    int n1=mid-low+1;
    int n2=high-mid;
    long long left[n1];
    long long right[n2];
    for(int  i=0;i<n1;i++)
    {
        left[i]=arr[i+low];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+1+i];
    }
   long long i=0,j=0,k=low,res=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            res+=n1-i;
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }
    return res;
    }
    long long  mergeSort(long long arr[],long long left,long long right)
    {
      long long res=0;
      if(left<right)
      {
         long long mid=(left+right)/2;
         res+=mergeSort(arr,left,mid);
         res+=mergeSort(arr,mid+1,right);
         res+=merge(arr,left,mid,right);
      }
    return res;
    }
    long long int inversionCount(long long T[], long long n)
    {
        return mergeSort(T,0,n-1);
    }
};
