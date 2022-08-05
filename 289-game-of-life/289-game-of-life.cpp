class Solution {
public:
    
    int helper(vector<vector<int>>& curr,int i,int j,int m,int n)
    {
        int liveneighbours = 0;
        
        if(i>0)
        {
            if(curr[i-1][j]==1 || curr[i-1][j]==3) liveneighbours++; //top
        }
        
        if(i<m-1)
        {
            if(curr[i+1][j]==1 || curr[i+1][j]==3) liveneighbours++; //bottom
        }
        
        if(j>0)
        {
            if(curr[i][j-1]==1 || curr[i][j-1]==3) liveneighbours++; //left
        }
        
        if(j<n-1)
        {
            if(curr[i][j+1]==1 || curr[i][j+1]==3) liveneighbours++; //right
        }
        
        //all four diagonals
        
        if(i>0 && j>0)
        {
            if(curr[i-1][j-1]==1 || curr[i-1][j-1]==3) liveneighbours++;
        }
        
        if(i>0 && j<n-1)
        {
            if(curr[i-1][j+1]==1 || curr[i-1][j+1]==3) liveneighbours++;
        }
         if(i<m-1 && j>0)
        {
            if(curr[i+1][j-1]==1 || curr[i+1][j-1]==3) liveneighbours++;
        }
         if(i<m-1 && j<n-1)
        {
            if(curr[i+1][j+1]==1 || curr[i+1][j+1]==3) liveneighbours++;
        }
        
        return liveneighbours;
        
    }
    
    
    void gameOfLife(vector<vector<int>>& board) {
        
       // vector<vector<int>>curr = board; optimised solution
        int m = board.size();
        int n = board[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int temp = helper(board,i,j,m,n);
                
                if(board[i][j]==0) // currently dead
                {
                    if(temp==3)
                    {
                        board[i][j] = 2; //newly alive
                    }
                }
                else if(board[i][j]==1)
                {
                    if(temp<2 || temp>3)
                    {
                        board[i][j] = 3; //newly dead
                    }
                }
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==2) board[i][j] = 1;
                else if(board[i][j]==3) board[i][j] = 0;
            }
        }
        
    }
};