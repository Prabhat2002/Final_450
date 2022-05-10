class Solution
{
    public:
    void dfs(vector<vector<int>>&m, int n, vector<string> &v, int i, int j, string s)
    {
        if(i<0 || j<0 || i>=n || j>=n || m[i][j]==0)
            return;
        if(i == n-1 && j == n-1)
        {
            v.push_back(s);
            return;
        }
        m[i][j]=0;
        dfs(m, n, v, i+1, j, s+"D");
        dfs(m, n, v, i-1, j, s+"U");
        dfs(m, n, v, i, j+1, s+"R");
        dfs(m, n, v, i, j-1, s+"L");
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        vector<string>ans;
        dfs(m,n,ans,0,0,"");
        return ans;
    }
};
