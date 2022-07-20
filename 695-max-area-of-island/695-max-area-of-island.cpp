class Solution {
public:
    
    int dfs(vector<vector<int>>& grid,int row,int col)
    {
        
        if(row<0 || row==grid.size() || col<0 || col==grid[row].size() || grid[row][col]==0)
        {
            return 0;
        }
        
        grid[row][col] = 0;
        
        return (1+dfs(grid,row+1,col)+dfs(grid,row-1,col)+dfs(grid,row,col+1)+dfs(grid,row,col-1));
        
        
        
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count = max(count,dfs(grid,i,j));
                }
            }
        }
        
        return count;
    }
};