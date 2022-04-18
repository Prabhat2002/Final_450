void threeWayPartition(vector<int>& arr,int a, int b)
    {
      int n=arr.size();
      int l=0,h=n-1;
      for(int i=0;i<arr.size();i++)
      {
            if(arr[i]<a)
               swap(arr[i],arr[l++]);
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]>b)
               swap(arr[i],arr[h--]);
        }
    }
