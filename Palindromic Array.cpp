    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++)
    	{
           int temp=a[i];
           int ans=0;
           while(temp>0)
           {
              int r = temp%10;
              temp=temp/10;
              ans=(ans*10)+r;
           }
           if(ans!=a[i])
              return 0;
    	}
       return 1;
    }Palindromic Array 
