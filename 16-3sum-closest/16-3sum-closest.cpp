class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int ans = INT_MAX;
        int mainans = 0;
        
        for(int i=0;i<n-2;i++)
        {
            int j = i+1;
            int k = n-1;
            
            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                
                if(abs(sum-target)<ans)
                {
                    ans = abs(sum-target);
                    mainans = sum;
                }
                else if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        
        return mainans;
    }
};