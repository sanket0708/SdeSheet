class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        
        unordered_map<int,int>mp;
        
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        for(auto i:mp)
        {
            if(i.second>1)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};