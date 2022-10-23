class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        vector<int>freq(n+1,0);
        
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>1)
            {
                ans.push_back(nums[i]);
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            if(freq[i]==0)
            {
                ans.push_back(i);
            }
        }
        
        
        return ans;
    }
};