	int isPalindrome(string s)
	{
	    int n=s.length();
	    for(int i=0;i<n/2;i++)
	    {
	        if(s[i]!=s[n-1-i])
	           return 0;
	    }
	    return 1;
	}
