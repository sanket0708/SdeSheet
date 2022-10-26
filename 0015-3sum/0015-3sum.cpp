class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
           vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        if(n<3)
        {
            return {};
        }
        
        if(nums[0]>0){
            return {};
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum = 0;
            int j = i+1;
            int k = n-1;
            
            while(j<k)
            {
                sum = nums[i]+nums[j]+nums[k];
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
                    int lastj = nums[j] , lastk = nums[k];
                    
                    while(j<k && nums[j]==lastj)
                    {
                        j++;
                    }
                    while(j<k && nums[k]==lastk)
                    {
                        k--;
                    }
                }
            }
            
        }
        
        return ans;
    }
};