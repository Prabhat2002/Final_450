class Solution 
{
    public:
    bool valid(int i,int j,vector<vector<int>>&grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1)
            return 1;
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int fresh=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                   fresh++;
                if(grid[i][j]==2)
                   q.push({i,j});
            }
        }
        if(fresh==0)
           return 0;
        int ans=0;
        while(!q.empty())
        {
            int temp=0;
            int size=q.size();
            while(size--)
            {
                pair<int,int>p=q.front();
                q.pop();
                int x=p.first;
                int y=p.second;
                int dx[4]={1,-1,0,0};
                int dy[4]={0,0,1,-1};
                for(int i=0;i<4;i++)
                {
                    int x1=x+dx[i];
                    int y1=y+dy[i];
                    if(valid(x1,y1,grid))
                    {
                        grid[x1][y1]=2;
                        temp++;
                        q.push({x1,y1});
                    }
                }
            }
            if(temp)
               ans++;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1) 
                    return -1;      
            }
        }
        return ans;
    }
};
