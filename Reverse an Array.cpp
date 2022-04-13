#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   // vector<int>nums(n);
	    int nums[n];
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        nums[i]=x;
	    }
	    for(int i=n-1;i>=0;i--)
	        cout<<nums[i]<<" ";
	    cout<<endl;  
	}
	return 0;
}
