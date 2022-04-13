void sort012(int a[], int n)
{
        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
              zero++;
            else if(a[i]==1)
              one++;
            else
              two++;
        }
        for(int i=0;i<n;i++)
        {
            if(i<zero)
               a[i]=0;
            else if(i<one+zero)
               a[i]=1;
            else
               a[i]=2;
        }
}
