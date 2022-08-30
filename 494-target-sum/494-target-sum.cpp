class Solution {
public:
    
int f(int ind,int sum,vector<int>&num,vector<vector<int>>&dp)
{
    if(ind==0)
    {
        if(sum==0 && num[0]==0) return 2;
        if(sum==0 || sum==num[0]) return 1;
        return 0;
    }
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    int nottake = f(ind-1,sum,num,dp);
    int take = 0;
    if(num[ind]<=sum) take = f(ind-1,sum-num[ind],num,dp);
    
    return dp[ind][sum] = (nottake + take);
}
int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>>dp(n,vector<int>(tar+1,-1));
    return f(n-1,tar,num,dp);
}
int countPartitions(int n, int d, vector<int> &arr) {
    int totsum = 0;
    for(int i=0;i<n;i++)
    {
        totsum += arr[i];
    }
    
    if(totsum-d<0 || (totsum-d)%2) return false;
    
    return findWays(arr,(totsum-d)/2);
}

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return countPartitions(n,target,nums);
    }
};