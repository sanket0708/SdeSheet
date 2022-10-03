class Solution {
public:
  int dp[1002][32];
    long long mod = 1e9+7;
    // n , target
    int func( int n , int faces , int target)
    {
        if(n==0 && target==0)
        {
            return 1;
        }
        
        if(n<=0 || target<=0)
        {
            return 0;
        }
        
        if(dp[target][n]!=-1)
        {
            return dp[target][n];
        }
        
      
        
        int ans=0;
        
        for(int k=1 ; k<=faces ;k++)
        {
            if(target-k>=0)
                ans = (ans%mod  + func(n-1 , faces , target-k)%mod )%mod;
            
        }
        
        return dp[target][n]=ans%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp , -1 , sizeof(dp));
        return func(n , k , target);
    }
};