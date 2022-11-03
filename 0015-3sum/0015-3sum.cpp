class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int n = nums.size();
        
        if(n<3)
        {
            return {};
        }
        
        sort(nums.begin(),nums.end());
        
        if(nums[0]>0)
        {
            return {};
        }
        
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            if(nums[i]>0)
            {
                break;
            }
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            int j = i+1;
            int k = n-1;
            
            while(j<k)
            {
                sum = nums[i] + nums[j] + nums[k];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    int lastJ = nums[j] , lastK = nums[k];
                    
                    while(j<k && nums[j]==lastJ)
                    {
                        j++;
                    }
                    while(k>j && nums[k]==lastK)
                    {
                        k--;
                    }
                }
            }
            
        }
        
        return ans;
    }
};