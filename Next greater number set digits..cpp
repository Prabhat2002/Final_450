class Solution
{
    public:
    int findNext (int num) 
    {
        vector<int>v;
        while(num)
        {
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        int k=v.size()-2;
        for(k;k>=0;k--)
        {
            if(v[k]<v[k+1])
               break;
        }
        if(k==-1)
           return -1;
        int i;   
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i]>v[k])
              break;
        }
        swap(v[i],v[k]);
        reverse(v.begin()+k+1,v.end());
        int ans=0;
        for(int i=0;i<v.size();i++)
            ans=ans*10+v[i];
       return ans;
    }  
};
