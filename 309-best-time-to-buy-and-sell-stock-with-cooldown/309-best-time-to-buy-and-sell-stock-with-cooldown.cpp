class Solution {
public:
    int help(int i , vector<int>&P,int bag,vector<vector<int>>&dp)
    {
        if(i>=P.size()) return 0;
        if(dp[i][bag]!=-1) return dp[i][bag];
        if(bag==1)
        {
            int op2 = P[i] + help(i+2,P,0,dp);
            int op3 = help(i+1,P,1,dp);
            return dp[i][bag] = max(op2,op3);
        }
        else
        {
            int op1 = -P[i] + help(i+1,P,1,dp);
            int op3 = help(i+1,P,0,dp);
            return dp[i][bag] = max(op1,op3);
        }
    }
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
        return help(0,prices,0,dp);
        
    }
};