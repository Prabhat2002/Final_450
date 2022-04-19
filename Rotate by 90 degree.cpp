void rotate(vector<vector<int> >& matrix)
{
    int k=0;
    int n = matrix.size();
    while(k<3)
    {
        for(int i=0;i<n;i++) 
        {
            for(int j=i;j<n;j++) 
                swap(matrix[i][j],matrix[j][i]);
        }
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n/2;j++) 
                swap(matrix[i][j],matrix[i][n-j-1]); 
        }
        k++;
    }
}
