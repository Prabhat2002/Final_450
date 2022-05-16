class Solution 
{
    public:
    bool valid(int i,int j,vector<vector<int>>&grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==0)
           return true;
        return false;
    }
    vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int row = grid.size();
        int column = grid[0].size();
        queue<pair<int,int>> q ;
        vector<vector<int>>ans(row,vector<int>(column,INT_MAX));
        vector<vector<int>>vis(row,vector<int>(column,false));
        for(int i=0;i<row;i++)
        {
           for(int j=0;j<column;j++)
           {
               if(grid[i][j]==1)
               {
                  vis[i][j]=true; 
                  q.push({i,j});
                  ans[i][j] = 0;
               }
           }
        }
    
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
               int i = q.front().first;
               int j = q.front().second;
               int dx[] = {1, -1, 0, 0};
               int dy[] = {0, 0, -1, 1};
               for(int k=0;k<4;k++)
               {
                  int x=i+dx[k];
                  int y=j+dy[k];
                  if(valid(x,y,grid))
                  {
                    if(vis[x][y]==false)
                    {
                      vis[x][y]=true;    
                      ans[x][y]=ans[i][j]+1;
                      q.push({x,y});
                    }
                  }
               }
               q.pop();
            }
        }
       return ans;
	}
};
