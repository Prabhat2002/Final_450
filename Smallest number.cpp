class Solution
{   
 public:
    string smallestNumber(int sum, int digit)
    {
          if(sum>digit*9)
             return "-1";
          vector<int> res(digit, 0);
          int i=digit-1;
          while(sum>9)
          {
              res[i]=9;
              i--;
              sum=sum-9;
          }
          if(i==0)
              res[0]=sum;
          else if(i>0)
          {
            res[0]=1;
            res[i]=sum-1;
          }
          string ans="";
          for(int i=0;i<res.size();i++)
              ans+=to_string(res[i]);
          return ans;
    }
};
