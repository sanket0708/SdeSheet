class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ans = INT_MIN;
        int count = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            
            ans = max(ans,count);
        }
        
        return ans;
        
    }
};