class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int x = nums.size()/3;
        unordered_map<int,int>freq;
        
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        
        
        for(auto i:freq)
        {
            if(i.second > x)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};