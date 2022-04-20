    string longestPalindrome(string s) 
    {
     int n=s.size();  
     int dp[n][n];
     string str=s;
     reverse(str.begin(),str.end());   
     if(s==str)
         return str;
     for(int gap=0;gap<n;gap++)
     {
          int i=0,j=gap;
          for(;j<n;i++,j++)
          {
              if(gap==0)
                  dp[i][j]=1;
              else if(gap==1)
              {
                  if(s[i]==s[j])
                      dp[i][j]=1;
                  else
                      dp[i][j]=0;
              }
              else
              {
                  if(dp[i+1][j-1] && s[i]==s[j])
                      dp[i][j]=1;
                  else
                      dp[i][j]=0;
              }
          }
     }   
     string ans="";
     for(int i=0;i<n;i++)
     {
       for(int j=i;j<n;j++)
       {
           if(dp[i][j])
           {
               if(ans.length()<j-i+1)
                   ans=s.substr(i,j+1-i);
           }
       }  
    }
    return ans;  
    }
