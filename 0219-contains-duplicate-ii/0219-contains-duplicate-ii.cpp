class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto &it:mp)
        {
            if(it.second.size()>1)
            {
                for(int i=0;i<it.second.size()-1;i++)
                {
                    if(abs(it.second[i]-it.second[i+1])<=k)
                    {
                        return true;
                    }
                }
            }
           
        }
        
        return false;
    }
};