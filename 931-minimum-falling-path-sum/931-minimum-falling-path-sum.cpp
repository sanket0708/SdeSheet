class Solution {
public:
    
    int f(int i,int j,vector<vector<int>>& matrix, vector<vector<int>>&dp)
    {
        int n = matrix.size();
        if(j<0 || j>=n) return 1e9;
       
        if(i==0)
        {
            return matrix[i][j];
        }
        
      
        if(dp[i][j]!=-1) return dp[i][j];
        //3 directions
        
        int up = matrix[i][j] + f(i-1,j,matrix,dp);
        int leftup = matrix[i][j] + f(i-1,j-1,matrix,dp);
        int rightup = matrix[i][j] + f(i-1,j+1,matrix,dp);
        
        return dp[i][j] = min(up,min(leftup,rightup));
        
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        int mini = INT_MAX;
        
        for(int j=0;j<n;j++)
        {
            mini = min(mini,f(n-1,j,matrix,dp));
        }
        
        return mini;
    }
};