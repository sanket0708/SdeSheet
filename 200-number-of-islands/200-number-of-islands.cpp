class Solution {
public:
    void helper(vector<vector<char>>& grid,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!='1')
        {
            return;
        }
        
        grid[x][y] = '2';
        
        helper(grid,x+1,y,r,c);
        helper(grid,x-1,y,r,c);
        helper(grid,x,y+1,r,c);
        helper(grid,x,y-1,r,c);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        if(row==0) return 0;
        int cols = grid[0].size();
        int ans = 0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    helper(grid,i,j,row,cols);
                    ans++;
                }
            }
        }
        
        return ans;
        
    }
};