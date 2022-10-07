class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = 1;
        int last = 0;
        sort(nums.begin(),nums.end());
        vector<int>dp(n,1),hash(n);
        for(int i=0;i<n;i++)
        {
            hash[i] = i;
            for(int prev=0;prev<i;prev++)
            {
                if(nums[i]%nums[prev]==0 && 1+dp[prev]>dp[i])
                {
                    dp[i] = max(dp[i],1+dp[prev]);
                    hash[i] = prev;
                }
            }
            
            if(dp[i]>maxi)
            {
                maxi = dp[i];
                last = i;
            }
        }
        
        vector<int>ans;
        ans.push_back(nums[last]);
        
        while(hash[last]!=last)
        {
            last = hash[last];
            ans.push_back(nums[last]);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};