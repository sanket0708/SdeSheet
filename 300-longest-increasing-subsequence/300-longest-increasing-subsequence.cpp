class Solution {
public:
    //RECURSION + MEMOIZATION
    int help(int ind , int prev ,vector<int>& arr,vector<vector<int>> &dp){
        if(ind == arr.size())return 0;
            
        if(dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        
        int nottake = help(ind+1,prev,arr,dp);
        int take =0;
        if(prev==-1 || arr[ind]>arr[prev]){
            take = 1+help(ind+1,ind,arr,dp);
        }
        return dp[ind][prev+1]=max(nottake,take);
    }
     int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        //APPROACH 1
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return help(0,-1,nums,dp);
		}
};