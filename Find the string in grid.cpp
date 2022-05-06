class Solution 
{
 public:
   int x[8] = {1,-1,0,0,1,-1,1,-1};
   int y[8] = {1,-1,1,-1,0,0,-1,1};
   bool find(int i,int j,int n,int m,vector<vector<char>>&a,int pos,string word,int x,int y)
   {
       if(pos==word.length())
            return true;
       if(i<0||j<0||i>=n||j>=m||a[i][j]!=word[pos])
             return false;
       return find(i+x,j+y,n,m,a,pos+1,word,x,y);
   }
    vector<vector<int>>searchWord(vector<vector<char>>a, string word)
    {
       vector<vector<int>>v;
       int n=a.size(),m=a[0].size();
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(a[i][j]==word[0])
               {
                  for(int k=0;k<8;k++)
                  {
                      if(find(i,j,n,m,a,0,word,x[k],y[k]))
                       {
                          v.push_back({i,j});
                          break;
                       }
                  }
               }
           }
       }
       return v;
    }
};
