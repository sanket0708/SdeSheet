class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currsum = 0;
        int prev = INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            currsum += nums[i];
            
               if(currsum>prev)
            {
                prev = currsum;
            }
            
            if(currsum<0)
            {
                currsum = 0;
            }
            
         
        }
        
        return prev;
        
    }
};